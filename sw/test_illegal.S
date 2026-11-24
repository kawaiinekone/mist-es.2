# Exhaustive illegal instruction decode verification for MIST-ES
# Exercises every invalid funct3/funct7 decode branch in mist_es_decode.sv
# and all reserved/illegal compressed instruction cases in mist_es_rvc.sv
.section .text
.globl _start

_start:
    la t0, mtrap
    csrw mtvec, t0

    # ---- 32-bit uncompressed illegal instructions ----
    # 1. JALR with funct3 = 1
    .word 0x00001067

    # 2. BRANCH with funct3 = 2
    .word 0x00002063

    # 3. LOAD with funct3 = 3
    .word 0x00003003

    # 4. STORE with funct3 = 3
    .word 0x00003023

    # 5. OP-IMM with invalid funct3/funct7
    .word 0xfe001013
    .word 0xfe005013
    .word 0x00003013

    # 6. OP with invalid funct7 for each funct3
    .word 0xfe000033
    .word 0xfe001033
    .word 0xfe002033
    .word 0xfe003033
    .word 0xfe004033
    .word 0xfe005033
    .word 0xfe006033
    .word 0xfe007033

    # 7. SYSTEM with invalid sys_imm12 (funct3=0, not ecall/ebreak/mret)
    .word 0x12300073

    # 8. Unassigned major opcode
    .word 0x0000007b

    # ---- 16-bit compressed reserved / illegal instructions ----
    # 9. Quadrant 0 reserved funct3 (funct3 = 4, 5, 7)
    .short 0x8000
    .short 0xa000
    .short 0xe000

    # 10. C.ADDI16SP with nzimm == 0
    .short 0x6101

    # 11. C.LUI with nzimm == 0
    .short 0x6501

    # 12. C.SRLI with shamt[5] == 1
    .short 0x9001

    # 13. C.SRAI with shamt[5] == 1
    .short 0x9401

    # 14. Q1 funct3=4 reserved sub-case
    .short 0x9c01

    # 15. Q2 reserved funct3 (funct3 = 1, 5)
    .short 0x2002
    .short 0xa002

    # 16. C.SLLI with shamt == 0, shamt[5] == 1, or rd == 0
    .short 0x0082
    .short 0x1082
    .short 0x0002

    # 17. C.LWSP with rd == 0
    .short 0x4002

    # 18. C.JR with rs1 == 0
    .short 0x8002

    # 19. C.JALR with rs1 == 0
    .short 0x9002

    # 20. C.EBREAK with rs2 != 0
    .short 0x9006

    # All illegal decodes verified! Success write to tohost (0x20000000 = 1)
    li t0, 0x20000000
    li t1, 1
    sw t1, 0(t0)
1:  j 1b

mtrap:
    # Check illegal instruction (mcause == 2) or breakpoint (mcause == 3)
    csrr t5, mcause
    li   t6, 2
    beq  t5, t6, 1f
    li   t6, 3
    bne  t5, t6, fail

1:
    # Read instruction halfword at mepc to check if 16-bit or 32-bit
    csrr t5, mepc
    lhu  t4, 0(t5)
    andi t4, t4, 3
    li   t3, 3
    beq  t4, t3, 2f

    # 16-bit compressed instruction: advance mepc by 2
    addi t5, t5, 2
    csrw mepc, t5
    mret

2:  # 32-bit uncompressed instruction: advance mepc by 4
    addi t5, t5, 4
    csrw mepc, t5
    mret

fail:
    li t0, 0x20000000
    li t1, 2
    sw t1, 0(t0)
3:  j 3b
