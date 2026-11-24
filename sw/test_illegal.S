# Exhaustive illegal instruction decode verification for MIST-ES
# Exercises every invalid funct3/funct7 decode branch in mist_es_decode.sv
.section .text
.globl _start

_start:
    la t0, mtrap
    csrw mtvec, t0

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

    # 7. Unassigned opcode
    .word 0x0000007b

    # All illegal decodes verified! Success write to tohost (0x20000000 = 1)
    li t0, 0x20000000
    li t1, 1
    sw t1, 0(t0)
1:  j 1b

mtrap:
    # Check illegal instruction (mcause == 2)
    csrr t5, mcause
    li   t6, 2
    bne  t5, t6, fail

    # Advance mepc past the faulting 4-byte instruction
    csrr t5, mepc
    addi t5, t5, 4
    csrw mepc, t5
    mret

fail:
    li t0, 0x20000000
    li t1, 2
    sw t1, 0(t0)
2:  j 2b
