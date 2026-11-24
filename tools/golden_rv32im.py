#!/usr/bin/env python3
"""Self-contained RV32IM golden ISA simulator for MIST-ES.

Functional, per-instruction reference. Loads the same $readmemh image the RTL
testbench runs and emits a retire trace in the exact format tb_mist_es.sv
prints under +TRACE=1:

    RETIRE pc=%08x instr=%08x rdwe=%d rd=%d rdval=%08x

so cosim.py can diff RTL vs golden retire-by-retire. Implements RV32I + M,
machine-mode CSRs, and ECALL/EBREAK/illegal -> mtvec / MRET, matching the
core's in-order commit behaviour (a trapping instruction commits with no
register write, then execution redirects).

Memory map mirrors mist_es_soc.sv:
    0x0000_0000.. IMEM   0x2000_0000 tohost(stop)   0x8000_0000.. DRAM
"""
import sys

MASK = 0xFFFFFFFF
def u32(x): return x & MASK
def sext(v, bits):
    s = 1 << (bits - 1)
    return (v & (s - 1)) - (v & s)

DRAM_BASE = 0x80000000
TOHOST    = 0x20000000

class Mem:
    def __init__(self, imem_words):
        self.imem = list(imem_words)
        self.dram = {}          # word index -> value
        self.tohost = None
    def ifetch(self, addr):
        idx = (addr >> 2)
        return self.imem[idx] if 0 <= idx < len(self.imem) else 0x13
    def load_word(self, addr):
        if DRAM_BASE <= addr < DRAM_BASE + (1 << 28):
            return self.dram.get((addr - DRAM_BASE) >> 2, 0)
        idx = addr >> 2                       # unified read of .text/.rodata
        if 0 <= idx < len(self.imem):
            return self.imem[idx]
        return 0
    def store(self, addr, val, be):
        if addr == TOHOST:
            self.tohost = u32(val); return
        if DRAM_BASE <= addr < DRAM_BASE + (1 << 28):
            i = (addr - DRAM_BASE) >> 2
            cur = self.dram.get(i, 0)
            new = 0
            for b in range(4):
                src = (val >> (8*b)) & 0xFF if (be >> b) & 1 else (cur >> (8*b)) & 0xFF
                new |= src << (8*b)
            self.dram[i] = u32(new)

class CPU:
    def __init__(self, mem):
        self.x = [0]*32
        self.pc = 0
        self.mem = mem
        self.csr = {}
        for a in (0x300,0x304,0x305,0x340,0x341,0x342,0x343,0x344):
            self.csr[a] = 0
    def rd_csr(self, a):
        if a == 0x301: return (1<<30)|(1<<8)|(1<<12)|(1<<2)|(1<<1)   # misa RV32IMCB
        if a == 0xF14: return 0
        return self.csr.get(a, 0)
    def wr_csr(self, a, v):
        self.csr[a] = u32(v)

    def step(self):
        pc = self.pc
        ins = self.mem.ifetch(pc)
        op  = ins & 0x7F
        rd  = (ins >> 7) & 0x1F
        f3  = (ins >> 12) & 7
        rs1 = (ins >> 15) & 0x1F
        rs2 = (ins >> 20) & 0x1F
        f7  = (ins >> 25) & 0x7F
        a   = self.x[rs1]; b = self.x[rs2]
        imm_i = sext(ins >> 20, 12)
        imm_s = sext(((ins >> 25) << 5) | ((ins >> 7) & 0x1F), 12)
        imm_b = sext(((ins>>31)<<12)|(((ins>>7)&1)<<11)|(((ins>>25)&0x3F)<<5)|(((ins>>8)&0xF)<<1),13)
        imm_u = ins & 0xFFFFF000
        imm_j = sext(((ins>>31)<<20)|(((ins>>12)&0xFF)<<12)|(((ins>>20)&1)<<11)|(((ins>>21)&0x3FF)<<1),21)

        rd_we = False; rd_val = 0; npc = u32(pc + 4); trap = False

        def wb(v):
            nonlocal rd_we, rd_val
            if rd != 0:
                rd_we = True; rd_val = u32(v)

        if op == 0x37:   wb(imm_u)                       # LUI
        elif op == 0x17: wb(u32(pc + imm_u))             # AUIPC
        elif op == 0x6F: wb(pc + 4); npc = u32(pc + imm_j)   # JAL
        elif op == 0x67: wb(pc + 4); npc = u32((a + imm_i) & ~1)  # JALR
        elif op == 0x63:                                  # BRANCH
            t = {0:a==b,1:a!=b,4:sext(a,32)<sext(b,32),5:sext(a,32)>=sext(b,32),
                 6:a<b,7:a>=b}.get(f3, False)
            if t: npc = u32(pc + imm_b)
        elif op == 0x03:                                  # LOAD
            addr = u32(a + imm_i); w = self.mem.load_word(addr); off = addr & 3
            if   f3 == 0: wb(sext((w >> (8*off)) & 0xFF, 8))
            elif f3 == 4: wb((w >> (8*off)) & 0xFF)
            elif f3 == 1: wb(sext((w >> (16*(off>>1))) & 0xFFFF, 16))
            elif f3 == 5: wb((w >> (16*(off>>1))) & 0xFFFF)
            elif f3 == 2: wb(w)
            else: trap = True
        elif op == 0x23:                                  # STORE
            addr = u32(a + imm_s); off = addr & 3
            if   f3 == 0: self.mem.store(addr, (b & 0xFF) << (8*off), 1 << off)
            elif f3 == 1: self.mem.store(addr, (b & 0xFFFF) << (8*off), 0b0011 << off)
            elif f3 == 2: self.mem.store(addr, b, 0b1111)
            else: trap = True
        elif op in (0x13, 0x33):
            imm_mode = (op == 0x13)
            src2 = imm_i if imm_mode else b
            if (not imm_mode) and f7 == 1:                # RV32M
                aa = sext(a,32); bb = sext(b,32)
                if   f3 == 0: wb(a*b)
                elif f3 == 1: wb((aa*bb) >> 32)
                elif f3 == 2: wb((aa*(b)) >> 32)
                elif f3 == 3: wb((a*b) >> 32)
                elif f3 == 4: wb(0xFFFFFFFF if b==0 else u32(int(aa/bb)) if not(aa==-2**31 and bb==-1) else 0x80000000)
                elif f3 == 5: wb(0xFFFFFFFF if b==0 else a//b)
                elif f3 == 6: wb(a if b==0 else u32(aa-int(aa/bb)*bb) if not(aa==-2**31 and bb==-1) else 0)
                elif f3 == 7: wb(a if b==0 else a-(a//b)*b)
            elif (not imm_mode) and f7 == 0x10 and f3 in (2, 4, 6): # Zba: sh1add, sh2add, sh3add
                shamt = 1 if f3 == 2 else 2 if f3 == 4 else 3
                wb((a << shamt) + b)
            elif (not imm_mode) and f7 == 0x20 and f3 in (7, 6, 4): # Zbb: andn, orn, xnor
                if f3 == 7: wb(a & ~b)
                elif f3 == 6: wb(a | ~b)
                elif f3 == 4: wb(~(a ^ b))
            elif (not imm_mode) and f7 == 0x05 and f3 in (4, 5, 6, 7): # Zbb: min, max, minu, maxu
                aa = sext(a, 32); bb = sext(b, 32)
                if f3 == 4: wb(min(aa, bb))
                elif f3 == 5: wb(max(aa, bb))
                elif f3 == 6: wb(min(u32(a), u32(b)))
                elif f3 == 7: wb(max(u32(a), u32(b)))
            elif (not imm_mode) and f7 == 0x30 and f3 in (1, 5): # Zbb: rol, ror
                sh = b & 0x1F
                if f3 == 1: wb((a << sh) | ((a & MASK) >> ((32 - sh) & 31)))
                elif f3 == 5: wb(((a & MASK) >> sh) | (a << ((32 - sh) & 31)))
            elif imm_mode and f7 == 0x30 and f3 == 5: # Zbb: rori
                sh = imm_i & 0x1F
                wb(((a & MASK) >> sh) | (a << ((32 - sh) & 31)))
            elif imm_mode and f7 == 0x30 and f3 == 1 and (imm_i & 0x1F) == 0: # Zbb: clz
                wb(32 - (a & MASK).bit_length() if (a & MASK) != 0 else 32)
            elif imm_mode and f7 == 0x30 and f3 == 1 and (imm_i & 0x1F) == 1: # Zbb: ctz
                val = a & MASK
                wb((val & -val).bit_length() - 1 if val != 0 else 32)
            elif imm_mode and f7 == 0x30 and f3 == 1 and (imm_i & 0x1F) == 2: # Zbb: cpop
                wb(bin(a & MASK).count('1'))
            elif imm_mode and f7 == 0x30 and f3 == 1 and (imm_i & 0x1F) == 4: # Zbb: sext.b
                wb(sext(a & 0xFF, 8))
            elif imm_mode and f7 == 0x30 and f3 == 1 and (imm_i & 0x1F) == 5: # Zbb: sext.h
                wb(sext(a & 0xFFFF, 16))
            elif (not imm_mode) and f7 == 0x04 and f3 == 4: # Zbb: zext.h
                wb(a & 0xFFFF)
            elif imm_mode and f7 == 0x34 and f3 == 5 and (imm_i & 0x1F) == 0x18: # Zbb: rev8
                b0 = (a >> 0) & 0xFF; b1 = (a >> 8) & 0xFF; b2 = (a >> 16) & 0xFF; b3 = (a >> 24) & 0xFF
                wb((b0 << 24) | (b1 << 16) | (b2 << 8) | b3)
            elif imm_mode and f7 == 0x14 and f3 == 5 and (imm_i & 0x1F) == 7: # Zbb: orc.b
                res = 0
                for byte_i in range(4):
                    if ((a >> (8 * byte_i)) & 0xFF) != 0:
                        res |= (0xFF << (8 * byte_i))
                wb(res)
            elif (not imm_mode) and f3 == 1 and f7 in (0x14, 0x24, 0x34): # Zbs: bset, bclr, binv
                sh = b & 0x1F
                if f7 == 0x14: wb(a | (1 << sh))
                elif f7 == 0x24: wb(a & ~(1 << sh))
                elif f7 == 0x34: wb(a ^ (1 << sh))
            elif imm_mode and f3 == 1 and f7 in (0x14, 0x24, 0x34): # Zbs: bseti, bclri, binvi
                sh = imm_i & 0x1F
                if f7 == 0x14: wb(a | (1 << sh))
                elif f7 == 0x24: wb(a & ~(1 << sh))
                elif f7 == 0x34: wb(a ^ (1 << sh))
            elif (not imm_mode) and f7 == 0x24 and f3 == 5: # Zbs: bext
                wb((a >> (b & 0x1F)) & 1)
            elif imm_mode and f7 == 0x24 and f3 == 5: # Zbs: bexti
                wb((a >> (imm_i & 0x1F)) & 1)
            else:
                sh = (src2 & 0x1F)
                if   f3 == 0: wb(a - b if (not imm_mode and f7==0x20) else a + src2)
                elif f3 == 1: wb(a << sh)
                elif f3 == 2: wb(1 if sext(a,32) < sext(src2,32) else 0)
                elif f3 == 3: wb(1 if u32(a) < u32(src2) else 0)
                elif f3 == 4: wb(a ^ src2)
                elif f3 == 5: wb(sext(a,32) >> sh if (f7==0x20) else (a & MASK) >> sh)
                elif f3 == 6: wb(a | src2)
                elif f3 == 7: wb(a & src2)
        elif op == 0x0F:  pass                            # FENCE -> nop
        elif op == 0x73:                                  # SYSTEM
            if f3 == 0:
                if   imm_i & 0xFFF == 0x000: trap = True; cause = 11   # ECALL
                elif (ins >> 20) == 0x001:   trap = True; cause = 3    # EBREAK
                elif (ins >> 20) == 0x302:                              # MRET
                    npc = u32(self.csr[0x341])
                else: trap = True; cause = 2
            else:
                csr_a = (ins >> 20) & 0xFFF
                old = self.rd_csr(csr_a)
                imm_mode = (f3 & 0b100) != 0
                src = rs1 if imm_mode else self.x[rs1]
                fn = f3 & 0b011
                do_w = not (fn != 1 and (rs1 == 0))
                if   fn == 1: new = src
                elif fn == 2: new = old | src
                elif fn == 3: new = old & ~src
                else: new = old
                if do_w: self.wr_csr(csr_a, new)
                wb(old)
        else:
            trap = True; cause = 2

        if trap and op == 0x73 and f3 == 0 and (imm_i & 0xFFF) == 0x000:
            cause = 11
        if trap:
            rd_we = False
            self.csr[0x341] = pc                 # mepc
            self.csr[0x342] = cause if 'cause' in dir() else 2
            npc = u32(self.csr[0x305])            # mtvec

        # commit
        line = f"RETIRE pc={u32(pc):08x} instr={u32(ins):08x} rdwe={1 if rd_we else 0} rd={rd} rdval={u32(rd_val):08x}"
        if rd_we and rd != 0:
            self.x[rd] = u32(rd_val)
        self.pc = npc
        return line


def load_hex(path):
    words = []
    for ln in open(path):
        ln = ln.strip()
        if ln:
            words.append(int(ln, 16))
    return words


def main():
    if len(sys.argv) < 2:
        print("usage: golden_rv32im.py <hex> [max_steps]"); sys.exit(1)
    mem = Mem(load_hex(sys.argv[1]))
    max_steps = int(sys.argv[2]) if len(sys.argv) > 2 else 100000
    cpu = CPU(mem)
    for _ in range(max_steps):
        print(cpu.step())
        if mem.tohost is not None:
            sys.stderr.write(f"[GOLDEN] tohost=0x{mem.tohost:08x}\n")
            break

if __name__ == "__main__":
    main()
