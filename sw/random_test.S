# MIST-ES Constrained Random Verification Sequence
.section .text
.globl _start

_start:
    # Initialize stack pointer and base registers
    li sp, 0x80002000
    li gp, 0x80000000     # Safe DRAM base for loads/stores
    li s0, 0x00000000     # Corner-case 0
    li s1, 0xFFFFFFFF     # Corner-case -1
    li s2, 0x80000000     # Corner-case INT_MIN
    li s3, 0x7FFFFFFF     # Corner-case INT_MAX
    li s4, 0x55555555     # Alternating bits
    li s5, 0xAAAAAAAA     # Alternating bits

    xor x19, x16, x23
    maxu x6, x19, x26
    sh2add x24, x14, x8
    clz x15, x8
    binvi x23, x15, 13
    rem x9, x31, x30
    sh3add x6, x16, x24
    rol x7, x22, x22
    sub x29, x27, x20
    sltiu x19, x13, 1037
    slti x20, x28, 573
    mul x8, x10, x8
    xor x20, x23, x13
    srai x8, x30, 25
    divu x19, x15, x23
    clz x24, x21
    sw x14, 220(gp)
    lw x16, 220(gp)
    sra x14, x27, x26
    sw x5, 248(gp)
    lw x17, 248(gp)
    mulhu x25, x20, x10
    rem x14, x13, x14
    sltiu x22, x23, 1732
    bge x15, x8, .L_br_0
    addi x7, x7, 1
.L_br_0:
    sw x28, 64(gp)
    lw x24, 64(gp)
    max x8, x24, x14
    ror x18, x22, x26
    binvi x6, x5, 10
    div x28, x16, x30
    rev8 x6, x31
    div x7, x15, x6
    ctz x21, x5
    bexti x23, x10, 18
    xnor x27, x22, x30
    sw x19, 196(gp)
    lw x29, 196(gp)
    sext.h x25, x11
    div x13, x20, x17
    mulhsu x9, x5, x5
    minu x10, x20, x17
    mul x19, x20, x16
    orc.b x11, x22
    bexti x29, x22, 2
    orn x10, x25, x13
    zext.h x17, x15
    sll x30, x7, x30
    remu x9, x10, x18
    div x29, x30, x24
    sltu x30, x20, x6
    rol x15, x27, x29
    binvi x30, x20, 29
    srai x29, x9, 15
    sra x31, x23, x14
    mulh x25, x23, x26
    xor x25, x28, x8
    addi x26, x23, 1394
    div x25, x6, x31
    sw x8, 92(gp)
    lw x10, 92(gp)
    mul x17, x10, x14
    mulhu x24, x26, x19
    cpop x24, x29
    rev8 x5, x23
    bclr x22, x26, x7
    sw x25, 172(gp)
    lw x19, 172(gp)
    binvi x26, x5, 7
    sh2add x22, x10, x15
    mulh x29, x9, x29
    zext.h x9, x12
    ctz x30, x14
    addi x29, x6, 1023
    mul x21, x9, x30
    ori x7, x29, 1563
    orn x26, x22, x27
    or x26, x22, x16
    divu x23, x25, x17
    srl x19, x16, x13
    ror x27, x23, x16
    ror x19, x24, x25
    srli x10, x5, 0
    mulhsu x27, x28, x5
    mulhsu x12, x18, x15
    bgeu x7, x16, .L_br_1
    addi x30, x30, 1
.L_br_1:
    addi x24, x14, -238
    sltu x8, x11, x20
    xori x17, x28, -1441
    sltiu x16, x23, -706
    xori x9, x17, 684
    sw x10, 192(gp)
    lw x14, 192(gp)
    add x14, x5, x26
    sw x6, 16(gp)
    lw x22, 16(gp)
    min x10, x18, x10
    orn x17, x24, x23
    blt x19, x6, .L_br_2
    addi x18, x18, 1
.L_br_2:
    sw x8, 200(gp)
    lw x7, 200(gp)
    bseti x22, x12, 22
    bexti x18, x16, 2
    binvi x9, x23, 28
    sext.b x10, x21
    sw x23, 32(gp)
    lw x18, 32(gp)
    sra x11, x30, x20
    or x19, x15, x20
    sext.b x31, x8
    andn x19, x7, x12
    sh2add x22, x16, x14
    sw x25, 120(gp)
    lw x20, 120(gp)
    cpop x13, x29
    divu x31, x17, x31
    rem x26, x27, x19
    ctz x17, x20
    sub x9, x25, x20
    beq x17, x27, .L_br_3
    addi x11, x11, 1
.L_br_3:
    sub x16, x13, x18
    sw x12, 48(gp)
    lw x28, 48(gp)
    min x15, x26, x27
    mulhsu x26, x10, x28
    sub x27, x15, x11
    xnor x28, x16, x21
    slt x7, x19, x29
    divu x15, x19, x19
    ctz x14, x7
    maxu x21, x25, x24
    sw x8, 240(gp)
    lw x21, 240(gp)
    sw x9, 204(gp)
    lw x7, 204(gp)
    ori x10, x24, 1556
    slti x27, x10, -496
    bset x7, x12, x26
    slli x7, x21, 19
    slt x25, x22, x7
    beq x27, x25, .L_br_4
    addi x22, x22, 1
.L_br_4:
    mulh x31, x28, x17
    bseti x17, x20, 2
    xnor x14, x15, x8
    rem x17, x23, x19
    sub x12, x12, x25
    srl x12, x22, x28
    bgeu x19, x13, .L_br_5
    addi x13, x13, 1
.L_br_5:
    sub x10, x15, x12
    bclr x7, x26, x5
    binv x10, x15, x22
    maxu x5, x11, x25
    remu x18, x25, x16
    clz x18, x11
    bclri x12, x8, 16
    bge x7, x29, .L_br_6
    addi x24, x24, 1
.L_br_6:
    zext.h x22, x8
    mul x5, x6, x18
    remu x19, x30, x11
    clz x24, x8
    sh2add x15, x14, x26
    binvi x15, x10, 5
    and x28, x17, x7
    bclri x28, x16, 0
    andn x20, x17, x26
    sltu x5, x31, x18
    orc.b x16, x9
    rol x24, x24, x21
    sw x20, 100(gp)
    lw x11, 100(gp)
    orn x24, x11, x10
    sll x9, x11, x30
    ror x27, x24, x21
    ori x9, x25, 187
    xor x30, x13, x21
    sw x19, 216(gp)
    lw x22, 216(gp)
    and x5, x28, x15
    sw x30, 172(gp)
    lw x11, 172(gp)
    slt x13, x23, x6
    mulh x12, x31, x13
    div x11, x24, x31
    sw x10, 96(gp)
    lw x30, 96(gp)
    sw x10, 24(gp)
    lw x21, 24(gp)
    sw x20, 44(gp)
    lw x21, 44(gp)
    srli x10, x7, 13
    sext.b x18, x13
    sw x9, 184(gp)
    lw x25, 184(gp)
    xor x19, x24, x17
    slli x20, x7, 25
    mul x25, x16, x24
    remu x22, x27, x11
    beq x12, x23, .L_br_7
    addi x19, x19, 1
.L_br_7:
    bexti x21, x14, 19
    max x16, x10, x29
    sub x6, x8, x15
    xor x14, x27, x24
    blt x30, x6, .L_br_8
    addi x19, x19, 1
.L_br_8:
    rev8 x26, x16
    div x20, x22, x11
    sub x13, x27, x30
    slli x16, x23, 24
    clz x24, x31
    xnor x25, x18, x18
    mul x19, x8, x31
    xnor x8, x26, x18
    addi x9, x20, -156
    mul x26, x16, x27
    sh3add x16, x19, x29
    sw x24, 12(gp)
    lw x11, 12(gp)
    mulhsu x30, x12, x13
    remu x8, x9, x20
    rol x24, x20, x15
    cpop x13, x28
    min x31, x16, x8
    add x29, x19, x27
    sh3add x27, x30, x26
    sltiu x11, x11, 1376
    bclri x12, x6, 17
    slti x9, x5, -449
    sh2add x11, x31, x22
    div x26, x16, x14
    min x26, x29, x10
    xnor x15, x12, x7
    bexti x9, x15, 8
    andn x19, x30, x15
    divu x6, x24, x19
    add x10, x12, x10
    addi x14, x15, 1263
    sw x18, 60(gp)
    lw x15, 60(gp)
    mul x14, x10, x18
    rev8 x10, x10
    xor x5, x5, x18
    mulh x20, x18, x18
    bclri x24, x28, 26
    divu x22, x16, x27
    binv x17, x29, x19
    divu x28, x12, x19
    orn x31, x8, x5
    remu x31, x22, x17
    sub x12, x27, x28
    bclri x20, x10, 17
    bltu x21, x26, .L_br_9
    addi x17, x17, 1
.L_br_9:
    sext.b x11, x5
    sh2add x14, x19, x9
    sll x12, x22, x19
    divu x25, x18, x11
    sll x27, x29, x6
    sh2add x17, x24, x13
    bset x10, x27, x17
    mulh x29, x6, x6
    mul x30, x13, x21
    mul x23, x5, x16
    xnor x11, x14, x10
    remu x12, x31, x30
    sw x8, 48(gp)
    lw x8, 48(gp)
    bseti x18, x16, 6
    mulh x25, x15, x9
    sw x9, 180(gp)
    lw x15, 180(gp)
    rol x25, x27, x17
    orn x5, x24, x25
    mulhu x28, x28, x26
    bext x10, x30, x20
    xori x11, x28, -213
    and x13, x9, x9
    divu x30, x10, x21
    sw x15, 68(gp)
    lw x21, 68(gp)
    sh2add x11, x12, x22
    sw x7, 244(gp)
    lw x22, 244(gp)
    mulhu x17, x8, x24
    sh1add x10, x28, x31
    max x30, x25, x26
    orn x26, x5, x28
    sh1add x28, x25, x10
    sub x7, x14, x18
    rol x23, x26, x17
    binvi x6, x18, 16
    bexti x15, x6, 30
    sh3add x13, x8, x6
    sw x25, 72(gp)
    lw x16, 72(gp)
    sll x5, x31, x11
    sw x8, 64(gp)
    lw x11, 64(gp)
    srli x8, x27, 11
    sh3add x23, x7, x20
    and x20, x27, x20
    mulhu x28, x11, x9
    bgeu x28, x29, .L_br_10
    addi x20, x20, 1
.L_br_10:
    sltu x14, x12, x19
    mul x18, x30, x17
    bseti x8, x10, 15
    sltu x31, x31, x26
    srli x15, x18, 4
    bclr x30, x5, x20
    bseti x5, x19, 13
    rem x24, x15, x10
    slli x21, x30, 11
    slti x22, x11, -713
    xori x13, x10, 973
    orn x11, x9, x16
    bset x15, x5, x17
    min x5, x9, x14
    maxu x28, x9, x21
    divu x23, x24, x24
    binv x9, x9, x11
    andn x11, x19, x28
    ori x20, x28, 1740
    ror x31, x11, x29
    sh1add x14, x20, x23
    minu x21, x7, x26
    mulh x12, x24, x7
    sltiu x6, x14, -1480
    slti x12, x19, 1475
    sub x18, x22, x19
    add x26, x6, x23
    zext.h x10, x17
    sltu x10, x14, x14
    slli x7, x25, 22
    add x29, x10, x13
    xor x17, x15, x6
    rol x31, x15, x12
    mulh x21, x12, x8
    xori x11, x30, 350
    sw x7, 88(gp)
    lw x24, 88(gp)
    bclr x18, x13, x9
    minu x15, x5, x21
    zext.h x8, x28
    maxu x12, x15, x30
    bset x13, x15, x17
    mulh x10, x14, x27
    mulhsu x28, x8, x10
    sh3add x18, x29, x5
    min x20, x9, x6
    sw x31, 64(gp)
    lw x25, 64(gp)
    sltu x15, x5, x24
    sw x11, 204(gp)
    lw x6, 204(gp)
    max x31, x13, x16
    bclr x25, x16, x23
    srli x14, x22, 16
    srai x20, x5, 30
    rem x25, x14, x27
    mulh x25, x15, x25
    bne x10, x28, .L_br_11
    addi x6, x6, 1
.L_br_11:
    min x19, x17, x14
    bexti x24, x13, 15
    sltiu x13, x17, 1493
    sw x11, 76(gp)
    lw x5, 76(gp)
    slli x22, x6, 27
    sh1add x5, x13, x9
    addi x7, x9, -791
    sw x25, 164(gp)
    lw x19, 164(gp)
    bexti x8, x10, 13
    sext.b x6, x29
    bgeu x27, x8, .L_br_12
    addi x14, x14, 1
.L_br_12:
    sltu x12, x19, x6
    sw x19, 44(gp)
    lw x7, 44(gp)
    orc.b x17, x7
    sw x16, 184(gp)
    lw x7, 184(gp)
    xnor x15, x11, x10
    and x14, x25, x6
    srai x13, x25, 29
    bexti x12, x28, 25
    srli x16, x9, 11
    sw x16, 188(gp)
    lw x30, 188(gp)
    sltiu x25, x30, -1990
    sh3add x18, x16, x11
    sra x15, x22, x28
    sll x8, x30, x19
    sltiu x5, x11, 1623
    sw x6, 156(gp)
    lw x16, 156(gp)
    rol x31, x18, x7
    mulhsu x8, x10, x8
    orc.b x24, x14
    slli x14, x24, 18
    sext.b x27, x15
    or x8, x23, x18
    srl x12, x8, x17
    slt x6, x5, x10
    bset x29, x15, x14
    sh2add x16, x28, x24
    divu x31, x22, x14
    mulhsu x6, x28, x17
    slt x31, x19, x27
    or x26, x24, x13
    divu x15, x19, x7
    bge x19, x26, .L_br_13
    addi x12, x12, 1
.L_br_13:
    rem x16, x11, x31
    sh3add x28, x26, x5
    clz x7, x30
    sh1add x7, x18, x18
    sw x25, 244(gp)
    lw x21, 244(gp)
    sll x27, x9, x18
    srai x11, x27, 0
    xnor x12, x11, x8
    sub x26, x17, x15
    sw x7, 32(gp)
    lw x12, 32(gp)
    mulhsu x14, x5, x29
    clz x29, x26
    cpop x15, x8
    div x21, x28, x6
    cpop x9, x20
    minu x16, x19, x9
    srl x16, x16, x31
    mulhu x6, x14, x7
    srl x9, x22, x8
    sw x27, 188(gp)
    lw x25, 188(gp)
    sltiu x20, x30, -1740
    xor x25, x23, x9
    divu x31, x16, x7
    sw x29, 240(gp)
    lw x7, 240(gp)
    orc.b x14, x13
    rol x20, x30, x27
    binv x29, x28, x31
    sext.b x9, x9
    bset x13, x20, x6
    mulhu x13, x11, x24
    sw x6, 40(gp)
    lw x12, 40(gp)
    max x27, x16, x7
    sw x26, 88(gp)
    lw x6, 88(gp)
    andn x30, x10, x9
    divu x31, x11, x5
    ori x22, x8, 386
    sltu x20, x26, x9
    sub x6, x22, x6
    sltu x28, x24, x28
    ror x6, x28, x20
    add x13, x28, x12
    bseti x8, x11, 30
    div x7, x15, x7
    rol x30, x15, x20
    max x16, x9, x9
    binv x11, x25, x15
    xnor x9, x16, x25
    rol x10, x17, x18
    sw x27, 120(gp)
    lw x18, 120(gp)
    srli x26, x30, 29
    sw x30, 132(gp)
    lw x23, 132(gp)
    divu x8, x16, x22
    rem x29, x25, x15
    rem x27, x18, x29
    cpop x18, x29
    min x18, x7, x31
    and x6, x27, x18
    mulh x30, x23, x6
    sw x19, 144(gp)
    lw x19, 144(gp)
    ctz x23, x23
    andn x12, x12, x7
    slt x28, x21, x16
    zext.h x18, x18
    sw x26, 44(gp)
    lw x12, 44(gp)
    mulh x9, x11, x21
    sh3add x10, x26, x30
    cpop x11, x10
    sh1add x29, x30, x15
    or x13, x28, x25
    mulhsu x15, x22, x10
    sw x13, 68(gp)
    lw x17, 68(gp)
    bclr x7, x13, x30
    addi x6, x24, 1970
    rem x30, x14, x22
    andn x19, x18, x7
    xor x24, x22, x21
    xori x5, x19, -116
    rev8 x11, x19
    xnor x9, x21, x17
    cpop x9, x16
    sw x16, 216(gp)
    lw x26, 216(gp)
    sub x14, x8, x7
    xnor x12, x23, x20
    div x14, x22, x8
    zext.h x28, x31
    clz x11, x5
    sw x20, 216(gp)
    lw x8, 216(gp)
    binvi x18, x8, 18
    remu x13, x17, x7
    divu x12, x9, x28
    sw x30, 16(gp)
    lw x15, 16(gp)
    bexti x15, x5, 13
    mulhu x21, x9, x26
    mul x25, x23, x22
    clz x9, x26
    rem x10, x14, x19
    sh1add x29, x20, x19
    sltu x8, x6, x15
    bset x15, x10, x18
    remu x10, x19, x11
    srl x17, x8, x31
    or x7, x30, x19
    clz x16, x28
    mulhu x24, x14, x9
    sw x25, 188(gp)
    lw x30, 188(gp)
    rev8 x29, x20
    srli x5, x17, 25
    binv x22, x17, x11
    sh1add x21, x14, x25
    bltu x11, x16, .L_br_14
    addi x30, x30, 1
.L_br_14:
    sw x12, 108(gp)
    lw x24, 108(gp)
    ori x26, x28, -1063
    maxu x6, x26, x19
    orc.b x23, x22
    sw x9, 124(gp)
    lw x29, 124(gp)
    mulhu x19, x11, x8
    bge x8, x15, .L_br_15
    addi x11, x11, 1
.L_br_15:
    remu x10, x14, x8
    ori x13, x5, 792
    max x22, x18, x26
    sw x15, 64(gp)
    lw x5, 64(gp)
    mulhsu x7, x31, x20
    bge x18, x7, .L_br_16
    addi x27, x27, 1
.L_br_16:
    binvi x18, x10, 14
    bexti x16, x14, 22
    bseti x16, x11, 30
    sh3add x30, x19, x30
    div x7, x20, x19
    bext x26, x16, x16
    remu x25, x30, x8
    minu x29, x9, x8
    clz x6, x7
    sll x9, x27, x9
    sh1add x30, x6, x26
    sw x13, 96(gp)
    lw x15, 96(gp)
    min x9, x15, x24
    sub x27, x23, x28
    sext.h x18, x24
    sw x5, 152(gp)
    lw x25, 152(gp)
    sw x11, 208(gp)
    lw x19, 208(gp)
    sh2add x7, x6, x27
    sub x15, x14, x5
    bclr x27, x28, x21
    div x6, x15, x16
    minu x31, x26, x5
    xori x14, x8, -340
    min x28, x29, x21
    bclr x26, x27, x14
    sw x28, 52(gp)
    lw x28, 52(gp)
    remu x9, x14, x7
    xor x29, x10, x21
    sh1add x9, x26, x21
    sub x15, x9, x19
    rev8 x20, x7
    xnor x29, x7, x26
    slt x17, x14, x5
    xnor x16, x5, x6
    sra x20, x24, x8
    sra x27, x16, x29
    andi x7, x12, 1893
    sext.h x17, x11
    ori x24, x22, -211
    ori x10, x30, -504
    bclr x14, x20, x6
    sltu x7, x14, x15
    slli x28, x31, 0
    divu x31, x10, x14
    remu x14, x8, x28
    sh2add x20, x26, x17
    sub x13, x11, x21
    slt x11, x15, x5
    sw x27, 12(gp)
    lw x30, 12(gp)
    srai x19, x9, 21
    sll x26, x12, x26
    bseti x5, x26, 5
    sh1add x21, x24, x29
    bext x20, x12, x23
    rol x23, x28, x21
    or x11, x19, x14
    blt x22, x9, .L_br_17
    addi x5, x5, 1
.L_br_17:
    srl x8, x22, x10
    xor x7, x23, x5
    minu x18, x31, x19
    sh1add x7, x10, x7
    sw x5, 120(gp)
    lw x6, 120(gp)
    binv x12, x25, x5
    mulh x20, x29, x31
    sw x9, 184(gp)
    lw x28, 184(gp)
    and x7, x31, x12
    and x25, x13, x13
    bne x29, x17, .L_br_18
    addi x13, x13, 1
.L_br_18:
    srli x19, x28, 24
    sh1add x25, x6, x24
    mulhsu x8, x19, x30
    srli x17, x14, 21
    beq x27, x23, .L_br_19
    addi x29, x29, 1
.L_br_19:
    mulh x13, x9, x26
    sll x18, x8, x8
    zext.h x21, x25
    orn x28, x5, x23
    sra x17, x24, x14
    ctz x18, x23
    max x19, x9, x6
    add x12, x20, x25
    max x24, x13, x28
    or x30, x17, x9
    sh3add x28, x31, x19
    mul x14, x5, x25
    srli x10, x26, 3
    mulhu x25, x31, x23
    sh2add x28, x20, x18
    ror x26, x30, x15
    rol x25, x6, x12
    srl x21, x29, x14
    zext.h x8, x5
    ori x29, x8, 679
    xori x27, x11, 21
    sw x9, 216(gp)
    lw x21, 216(gp)
    sw x29, 240(gp)
    lw x17, 240(gp)
    orc.b x6, x23
    andi x18, x22, -50
    binv x30, x6, x20
    remu x25, x10, x24
    mulhu x21, x22, x9
    xnor x24, x14, x29
    add x11, x9, x31
    sw x12, 104(gp)
    lw x14, 104(gp)
    slt x12, x27, x7
    xnor x15, x11, x6
    mulhu x26, x27, x23
    sra x9, x13, x7
    binv x27, x8, x10
    slt x17, x15, x27
    bseti x25, x5, 9
    mulhsu x6, x16, x18
    sext.b x9, x5
    sw x27, 204(gp)
    lw x23, 204(gp)
    sll x21, x23, x6
    orn x19, x27, x20
    addi x25, x16, -1344
    sw x13, 100(gp)
    lw x5, 100(gp)
    sw x5, 36(gp)
    lw x16, 36(gp)
    bexti x30, x21, 17
    sub x12, x5, x16
    sltiu x14, x6, -1361
    ror x21, x14, x7
    addi x10, x24, 892
    max x11, x21, x30
    blt x24, x22, .L_br_20
    addi x14, x14, 1
.L_br_20:
    ror x7, x23, x13
    mulhsu x22, x15, x16
    sw x19, 148(gp)
    lw x12, 148(gp)
    orn x13, x21, x14
    addi x8, x7, -91
    sw x7, 248(gp)
    lw x26, 248(gp)
    orn x30, x27, x17
    sw x5, 28(gp)
    lw x19, 28(gp)
    minu x11, x6, x22
    slt x23, x14, x23
    blt x12, x7, .L_br_21
    addi x25, x25, 1
.L_br_21:
    max x6, x26, x9
    binv x15, x14, x18
    sh2add x21, x31, x10
    bgeu x25, x5, .L_br_22
    addi x29, x29, 1
.L_br_22:
    sub x21, x18, x27
    sw x22, 188(gp)
    lw x26, 188(gp)
    sh1add x13, x18, x14
    sw x30, 40(gp)
    lw x24, 40(gp)
    blt x15, x18, .L_br_23
    addi x10, x10, 1
.L_br_23:
    mulhu x29, x24, x31
    sw x15, 172(gp)
    lw x16, 172(gp)
    sltiu x16, x19, -1048
    ror x31, x20, x24
    sw x20, 12(gp)
    lw x23, 12(gp)
    addi x8, x30, 135
    cpop x26, x6
    srli x27, x9, 10
    rol x27, x21, x28
    bclr x8, x6, x14
    slt x22, x16, x27
    slli x24, x7, 18
    sw x22, 84(gp)
    lw x15, 84(gp)
    srl x18, x17, x13
    sll x26, x19, x12
    sltu x31, x10, x25
    bgeu x15, x26, .L_br_24
    addi x20, x20, 1
.L_br_24:
    sw x13, 64(gp)
    lw x11, 64(gp)
    remu x12, x27, x25
    bext x31, x10, x11
    sw x18, 208(gp)
    lw x27, 208(gp)
    maxu x26, x9, x14
    mulhu x26, x18, x6
    sh2add x31, x18, x31
    rem x7, x29, x23
    rev8 x28, x25
    binv x9, x5, x7
    bexti x6, x12, 16
    rem x23, x29, x25
    mulhsu x24, x12, x23
    max x23, x18, x31
    sub x9, x22, x15
    andn x12, x7, x23
    sw x28, 36(gp)
    lw x11, 36(gp)
    srl x20, x17, x9
    rev8 x8, x18
    max x7, x8, x24
    bset x21, x7, x22
    binvi x20, x29, 2
    sw x5, 180(gp)
    lw x31, 180(gp)
    sh1add x16, x23, x6
    zext.h x8, x17
    slli x30, x11, 9
    sh1add x5, x21, x27
    sra x29, x25, x8
    blt x21, x18, .L_br_25
    addi x28, x28, 1
.L_br_25:
    sub x18, x9, x20
    mulhu x19, x30, x23
    or x16, x25, x17
    sw x18, 120(gp)
    lw x6, 120(gp)
    xor x24, x15, x31
    srli x10, x21, 1
    mul x29, x30, x25
    slt x26, x22, x14
    bext x23, x28, x16
    zext.h x19, x23
    sw x6, 48(gp)
    lw x12, 48(gp)
    addi x25, x16, 1498
    max x9, x13, x21
    clz x30, x12
    sh2add x11, x20, x30
    binv x21, x21, x18
    sw x12, 164(gp)
    lw x31, 164(gp)
    rol x17, x20, x15
    bexti x13, x27, 29
    mulhsu x21, x7, x25
    maxu x6, x25, x11
    divu x31, x19, x6
    rem x8, x22, x23
    cpop x24, x10
    mulhu x18, x9, x11
    sh2add x30, x15, x11
    remu x6, x31, x14
    sra x24, x30, x23
    min x19, x21, x13
    sw x31, 12(gp)
    lw x8, 12(gp)
    mulhu x30, x14, x15
    or x10, x28, x31
    sw x14, 180(gp)
    lw x17, 180(gp)
    srl x28, x5, x13
    slli x25, x23, 2
    min x23, x7, x10
    sub x16, x23, x19
    min x14, x15, x22
    sltu x12, x24, x15
    xnor x9, x17, x20
    cpop x12, x26
    slli x24, x5, 22
    div x16, x20, x16
    ori x16, x17, -450
    beq x13, x23, .L_br_26
    addi x14, x14, 1
.L_br_26:
    rol x15, x30, x14
    sw x29, 232(gp)
    lw x15, 232(gp)
    srl x13, x7, x23
    minu x17, x25, x25
    sh2add x7, x10, x23
    sw x13, 160(gp)
    lw x31, 160(gp)
    orn x30, x13, x20
    and x12, x29, x6
    bext x30, x8, x20
    sw x30, 148(gp)
    lw x29, 148(gp)
    slli x17, x28, 8
    bge x16, x23, .L_br_27
    addi x12, x12, 1
.L_br_27:
    min x6, x27, x11
    sw x16, 196(gp)
    lw x9, 196(gp)
    bclri x10, x17, 20
    blt x14, x30, .L_br_28
    addi x27, x27, 1
.L_br_28:
    mulhsu x24, x21, x19
    max x6, x12, x23
    srli x12, x12, 0
    maxu x10, x6, x8
    andi x30, x8, 26
    sw x18, 208(gp)
    lw x30, 208(gp)
    mulhsu x9, x14, x30
    sub x7, x30, x5
    orc.b x23, x26
    bseti x27, x31, 29
    sw x23, 68(gp)
    lw x28, 68(gp)
    clz x15, x28
    sw x30, 12(gp)
    lw x18, 12(gp)
    xori x29, x11, 261
    srli x12, x18, 6
    sltu x31, x5, x11
    clz x26, x5
    mul x24, x26, x26
    bexti x20, x19, 30
    sh3add x22, x16, x16
    xnor x5, x21, x27
    clz x15, x11
    mulhu x19, x25, x6
    sw x16, 52(gp)
    lw x18, 52(gp)
    bseti x10, x18, 21
    addi x11, x15, 1478
    srl x23, x6, x16
    addi x14, x30, 85
    add x30, x26, x13
    sh1add x31, x5, x5
    div x30, x25, x25
    xor x10, x5, x23
    sra x16, x17, x11
    minu x27, x11, x27
    bltu x19, x19, .L_br_29
    addi x8, x8, 1
.L_br_29:
    orc.b x19, x11
    bset x18, x18, x12
    divu x5, x19, x6
    slt x13, x13, x11
    min x29, x5, x21
    mulhu x23, x29, x17
    sw x8, 104(gp)
    lw x7, 104(gp)
    sh1add x21, x11, x20
    mul x22, x5, x19
    remu x16, x7, x25
    mulhsu x10, x8, x24
    xor x11, x11, x17
    andn x16, x9, x17
    mulh x23, x25, x10
    andi x7, x6, -414
    mulh x11, x30, x10
    rev8 x31, x14
    cpop x31, x18
    xori x25, x18, 495
    srai x12, x5, 8
    mul x31, x21, x17
    sll x8, x30, x6
    sltu x30, x12, x25
    binvi x22, x27, 11
    zext.h x12, x13
    bclr x22, x11, x27
    bseti x13, x30, 0
    sw x24, 152(gp)
    lw x6, 152(gp)
    mulhsu x27, x8, x16
    slt x22, x26, x18
    bne x5, x23, .L_br_30
    addi x30, x30, 1
.L_br_30:
    sub x21, x7, x16
    clz x21, x29
    sra x14, x8, x23
    sh2add x28, x26, x27
    sw x16, 140(gp)
    lw x16, 140(gp)
    min x19, x10, x25
    sext.b x18, x15
    sw x18, 172(gp)
    lw x24, 172(gp)
    remu x22, x29, x29
    xori x5, x12, 892
    divu x8, x8, x10
    max x7, x10, x21
    mulhsu x6, x6, x6
    remu x26, x16, x22
    sext.h x19, x17
    andi x25, x20, 1015
    xori x27, x11, 1712
    sext.b x26, x26
    max x9, x25, x9
    ori x18, x23, -304
    slti x15, x31, -376
    sh1add x31, x10, x13
    mulh x31, x15, x14
    maxu x25, x20, x28
    bne x10, x9, .L_br_31
    addi x18, x18, 1
.L_br_31:
    sw x22, 148(gp)
    lw x29, 148(gp)
    bext x10, x5, x31
    mulhu x6, x7, x20
    srli x31, x17, 17
    ror x5, x31, x14
    rev8 x15, x9
    sw x7, 160(gp)
    lw x14, 160(gp)
    sw x18, 64(gp)
    lw x10, 64(gp)
    bge x5, x23, .L_br_32
    addi x28, x28, 1
.L_br_32:
    sh1add x15, x8, x8
    mul x12, x11, x7
    rem x9, x24, x28
    sext.h x25, x25
    sh1add x7, x28, x12
    andn x13, x8, x24
    minu x5, x5, x12
    max x10, x20, x22
    bset x5, x12, x17
    bclr x12, x22, x20
    sw x27, 136(gp)
    lw x17, 136(gp)
    min x24, x14, x22
    xori x9, x27, -1894
    add x7, x21, x21
    sw x7, 248(gp)
    lw x19, 248(gp)
    mulh x6, x24, x9
    sh3add x30, x18, x11
    xnor x20, x20, x7
    orc.b x8, x26
    slt x19, x10, x19
    sub x17, x5, x14
    min x19, x8, x27
    sub x27, x6, x18
    bseti x22, x8, 13
    srli x30, x19, 24
    sra x14, x24, x24
    add x28, x5, x8
    srli x16, x12, 29
    or x15, x18, x26
    sw x8, 36(gp)
    lw x10, 36(gp)
    or x7, x7, x15
    rol x18, x31, x15
    sra x16, x28, x23
    divu x15, x20, x15
    srl x31, x14, x19
    sh3add x24, x16, x23
    div x29, x11, x17
    slti x5, x13, -577
    ror x6, x8, x28
    slt x5, x13, x22
    mulh x17, x21, x23
    sh2add x7, x16, x23
    ori x13, x31, 2040
    mul x23, x14, x6
    sw x9, 152(gp)
    lw x21, 152(gp)
    srli x9, x31, 30
    bexti x21, x23, 25
    rol x18, x21, x11
    andi x19, x26, -1388
    mul x29, x11, x10
    maxu x13, x6, x30
    mulhu x14, x24, x14
    orn x10, x19, x7
    min x28, x30, x11
    sub x23, x17, x5
    xnor x19, x13, x26
    bgeu x23, x23, .L_br_33
    addi x15, x15, 1
.L_br_33:
    ctz x28, x11
    orn x10, x16, x20
    sub x27, x6, x15
    div x22, x26, x15
    sh2add x27, x26, x22
    sw x24, 216(gp)
    lw x29, 216(gp)
    min x9, x27, x23
    div x13, x26, x11
    srli x23, x8, 27
    sw x20, 136(gp)
    lw x10, 136(gp)
    divu x12, x18, x7
    minu x21, x16, x19
    min x24, x11, x29
    sub x24, x16, x7
    addi x5, x15, 912
    bltu x12, x27, .L_br_34
    addi x6, x6, 1
.L_br_34:
    sw x28, 92(gp)
    lw x8, 92(gp)
    sra x8, x15, x9
    bexti x19, x6, 20
    xnor x7, x23, x26
    min x16, x16, x10
    or x8, x11, x13
    mulhu x25, x18, x15
    or x26, x30, x30
    minu x14, x16, x20
    or x21, x9, x16
    rol x19, x22, x14
    sra x8, x22, x17
    xor x16, x14, x28
    divu x12, x27, x27
    srai x6, x21, 18
    sh1add x15, x10, x5
    sw x31, 44(gp)
    lw x19, 44(gp)
    rem x31, x27, x14
    divu x9, x10, x14
    minu x5, x19, x22
    sw x29, 132(gp)
    lw x16, 132(gp)
    mulhu x15, x23, x6
    orc.b x7, x21
    div x12, x31, x29
    xori x27, x10, 1160
    minu x25, x23, x31
    minu x6, x27, x17
    divu x28, x19, x30
    maxu x8, x7, x6
    bltu x21, x19, .L_br_35
    addi x28, x28, 1
.L_br_35:
    bne x7, x24, .L_br_36
    addi x31, x31, 1
.L_br_36:
    sh1add x24, x10, x10
    srai x16, x27, 30
    and x23, x20, x23
    mulh x16, x29, x25
    sll x8, x5, x31
    bexti x21, x18, 13
    sra x20, x28, x25
    sw x16, 16(gp)
    lw x28, 16(gp)
    bge x22, x23, .L_br_37
    addi x12, x12, 1
.L_br_37:
    min x24, x27, x23
    remu x5, x9, x6
    beq x16, x18, .L_br_38
    addi x27, x27, 1
.L_br_38:
    rev8 x17, x8
    bset x26, x11, x21
    binv x6, x13, x28
    mulhsu x10, x12, x14
    slli x17, x12, 18
    bseti x6, x21, 27
    xori x19, x31, -637
    mulhu x8, x17, x17
    rol x20, x11, x6
    remu x29, x10, x12
    ori x12, x24, 1059
    ctz x24, x7
    addi x12, x6, -917
    srai x17, x27, 0
    mulhu x20, x6, x14
    remu x16, x17, x12
    slti x8, x16, -1382
    mulhsu x22, x23, x27
    andn x8, x18, x31
    binv x22, x28, x17
    sltu x5, x9, x7
    binvi x12, x10, 23
    andi x31, x13, 2033
    max x26, x28, x31
    slt x10, x9, x9
    addi x6, x14, 107
    slti x20, x28, 1744
    sra x6, x25, x11
    minu x18, x27, x8
    ror x12, x9, x18
    xori x26, x31, 29
    clz x8, x13
    mulh x23, x29, x13
    sltu x5, x17, x27
    rem x27, x22, x7
    mulhsu x21, x6, x20
    div x30, x7, x5
    sext.h x13, x31
    slli x8, x24, 2
    remu x12, x17, x23
    xor x27, x21, x8
    xor x6, x28, x11
    divu x27, x25, x6
    mul x31, x24, x24
    rem x17, x28, x28
    sltiu x23, x29, 1809
    sltiu x10, x7, -853
    binvi x10, x6, 0
    sw x12, 200(gp)
    lw x6, 200(gp)
    divu x29, x18, x10
    rev8 x20, x6
    min x19, x13, x6
    sw x12, 160(gp)
    lw x20, 160(gp)
    srl x30, x30, x18
    bseti x27, x29, 17
    bge x31, x26, .L_br_39
    addi x30, x30, 1
.L_br_39:
    sh3add x18, x22, x29
    bseti x20, x7, 26
    andn x5, x24, x13
    ctz x23, x13
    orn x10, x10, x23
    clz x21, x30
    sw x15, 112(gp)
    lw x20, 112(gp)
    srli x13, x29, 11
    ori x21, x25, 118
    bge x6, x7, .L_br_40
    addi x8, x8, 1
.L_br_40:
    sw x12, 188(gp)
    lw x26, 188(gp)
    bge x29, x23, .L_br_41
    addi x10, x10, 1
.L_br_41:
    srl x27, x29, x23
    sltiu x10, x13, -247
    rol x26, x26, x8
    ctz x20, x5
    orn x17, x8, x28
    sub x30, x10, x16
    mul x28, x21, x14
    slt x8, x9, x13
    sext.h x14, x29
    clz x21, x15
    bext x19, x15, x25
    maxu x5, x25, x11
    minu x30, x18, x25
    bext x31, x12, x24
    rem x21, x29, x26
    bge x16, x10, .L_br_42
    addi x22, x22, 1
.L_br_42:
    srl x15, x8, x17
    sltiu x11, x11, -1401
    min x23, x8, x15
    ori x18, x9, -1138
    sra x16, x22, x20
    sext.h x17, x21
    sh3add x10, x15, x31
    divu x6, x17, x8
    binv x15, x16, x8
    cpop x21, x31
    sltu x24, x13, x30
    mul x6, x31, x19
    sh3add x19, x9, x12
    sw x12, 44(gp)
    lw x13, 44(gp)
    orn x24, x27, x13
    sw x6, 212(gp)
    lw x11, 212(gp)
    orn x8, x24, x8
    bge x24, x7, .L_br_43
    addi x29, x29, 1
.L_br_43:
    bset x22, x6, x12
    sext.h x28, x5
    sra x25, x30, x11
    ror x6, x5, x27
    sh1add x7, x11, x9
    srai x6, x30, 0
    bgeu x31, x24, .L_br_44
    addi x19, x19, 1
.L_br_44:
    sext.h x10, x11
    srl x30, x26, x10
    bge x10, x14, .L_br_45
    addi x23, x23, 1
.L_br_45:
    sw x18, 112(gp)
    lw x13, 112(gp)
    sltiu x11, x15, -929
    blt x24, x16, .L_br_46
    addi x11, x11, 1
.L_br_46:
    clz x18, x20
    max x31, x10, x31
    rol x21, x27, x25
    divu x30, x16, x9
    sw x31, 88(gp)
    lw x17, 88(gp)
    ori x18, x23, 253
    sw x20, 12(gp)
    lw x15, 12(gp)
    rev8 x5, x31
    div x19, x22, x17
    zext.h x7, x20
    bclr x21, x19, x21
    xor x28, x27, x28
    slt x24, x12, x20
    srli x12, x27, 26
    mul x27, x26, x21
    slli x22, x14, 8
    bltu x16, x5, .L_br_47
    addi x29, x29, 1
.L_br_47:
    bge x5, x8, .L_br_48
    addi x9, x9, 1
.L_br_48:
    div x21, x18, x27
    srai x10, x26, 2
    sub x29, x12, x19
    rol x14, x7, x16
    xori x13, x23, 1887
    andn x5, x15, x10
    div x25, x20, x13
    bext x15, x5, x17
    xori x23, x8, -913
    sub x24, x23, x31
    sh2add x9, x12, x23
    bclri x14, x31, 8
    orc.b x5, x28
    divu x8, x24, x22
    divu x9, x25, x27
    xori x10, x7, -286
    sub x8, x25, x30
    clz x22, x16
    maxu x21, x7, x24
    clz x29, x22
    rem x6, x7, x26
    sw x6, 40(gp)
    lw x10, 40(gp)
    binv x23, x17, x20
    xor x26, x11, x11
    mulhu x26, x27, x10
    andi x21, x6, 604
    xnor x20, x10, x15
    sh1add x5, x12, x28
    sw x28, 92(gp)
    lw x7, 92(gp)
    sw x14, 40(gp)
    lw x28, 40(gp)
    andi x16, x29, -464
    remu x17, x14, x23
    ori x7, x21, -1822
    orc.b x13, x6
    zext.h x10, x15
    sra x23, x5, x17
    bclr x13, x7, x23
    sext.b x13, x14
    sh1add x14, x13, x10
    andn x13, x11, x16
    mulhsu x15, x25, x17
    bseti x15, x11, 25
    div x19, x28, x7
    sext.b x23, x26
    slt x18, x29, x29
    srli x31, x28, 2
    orn x18, x28, x6
    sw x23, 208(gp)
    lw x29, 208(gp)
    sub x10, x9, x20
    mulh x29, x23, x24
    bseti x16, x16, 2
    slli x31, x28, 26
    binv x31, x6, x28
    binvi x25, x26, 30
    xnor x31, x5, x15
    sub x27, x16, x17
    sh1add x29, x18, x5
    rol x31, x13, x27
    remu x11, x22, x31
    cpop x5, x12
    slti x24, x12, 1458
    divu x17, x31, x28
    srl x7, x26, x11
    mul x22, x29, x17
    sw x6, 20(gp)
    lw x25, 20(gp)
    sw x30, 48(gp)
    lw x29, 48(gp)
    ctz x8, x23
    binv x8, x18, x30
    ror x17, x17, x30
    mulhsu x30, x6, x19
    sw x5, 156(gp)
    lw x22, 156(gp)
    cpop x30, x26
    andn x16, x20, x28
    mulh x28, x24, x20
    div x12, x28, x26
    mulhsu x16, x16, x28
    bext x5, x12, x17
    sw x27, 104(gp)
    lw x25, 104(gp)
    ror x29, x5, x25
    slti x6, x18, 472
    binvi x10, x31, 8
    bext x20, x23, x13
    ori x19, x9, -1004
    max x31, x30, x25
    sw x26, 244(gp)
    lw x17, 244(gp)
    orc.b x17, x21
    bexti x6, x20, 0
    sra x8, x18, x18
    sw x8, 136(gp)
    lw x16, 136(gp)
    bexti x21, x8, 13
    and x5, x19, x25
    sext.h x31, x13
    sext.b x29, x21
    minu x23, x9, x9
    srl x13, x23, x9
    mulhsu x12, x25, x6
    orc.b x22, x17
    and x16, x26, x20
    srli x11, x15, 7
    addi x29, x13, 289
    sltu x14, x28, x12
    srai x28, x29, 29
    ori x20, x15, 306
    addi x14, x15, 1321
    srl x26, x30, x23
    sw x15, 96(gp)
    lw x14, 96(gp)
    rem x20, x18, x31
    sh2add x10, x10, x17
    mulh x27, x12, x19
    binvi x21, x25, 20
    sw x16, 132(gp)
    lw x28, 132(gp)
    mul x6, x29, x6
    bclr x7, x23, x29
    bext x25, x15, x25
    sh3add x14, x24, x12
    bclr x5, x5, x23
    or x9, x20, x25
    minu x31, x17, x26
    mul x21, x15, x13
    zext.h x14, x11
    sub x14, x19, x24
    div x31, x11, x23
    sext.b x27, x30
    bgeu x23, x19, .L_br_49
    addi x11, x11, 1
.L_br_49:
    mulhsu x11, x12, x22
    srai x5, x19, 7
    sw x5, 32(gp)
    lw x31, 32(gp)
    srl x15, x8, x22
    sw x30, 32(gp)
    lw x22, 32(gp)
    mul x7, x12, x29
    bclr x16, x14, x30
    andi x18, x28, 914
    clz x27, x30
    mulh x29, x5, x7
    sw x31, 200(gp)
    lw x28, 200(gp)
    slti x22, x9, -273
    mulhu x19, x8, x10
    mul x5, x18, x16
    sh3add x15, x11, x26
    remu x11, x6, x5
    sll x22, x23, x24
    max x26, x6, x20
    sh3add x18, x18, x27
    xnor x27, x12, x20
    mulhu x11, x9, x10
    divu x25, x9, x24
    remu x21, x25, x29
    sltiu x18, x31, 987
    min x30, x26, x20
    remu x19, x10, x22
    srl x12, x24, x30
    sw x13, 160(gp)
    lw x17, 160(gp)
    xori x7, x30, -1319
    sw x18, 28(gp)
    lw x28, 28(gp)
    andi x19, x30, -1448
    div x25, x25, x20
    andi x30, x19, -1463
    bne x29, x27, .L_br_50
    addi x27, x27, 1
.L_br_50:
    blt x26, x27, .L_br_51
    addi x20, x20, 1
.L_br_51:
    add x16, x11, x10
    andn x13, x17, x12
    bset x21, x12, x23
    sra x13, x15, x14
    srai x16, x9, 22
    mul x10, x17, x23
    bclr x23, x27, x28
    sll x9, x9, x13
    or x7, x18, x17
    andi x30, x10, 455
    rem x23, x7, x7
    addi x27, x31, -1771
    bseti x11, x11, 24
    maxu x15, x14, x16
    divu x12, x5, x16
    orc.b x23, x7
    bclri x11, x27, 5
    slti x31, x10, -1235
    bclri x28, x13, 6
    bltu x27, x12, .L_br_52
    addi x13, x13, 1
.L_br_52:
    and x25, x27, x10
    sh3add x25, x19, x16
    slli x27, x12, 27
    div x24, x14, x29
    xor x26, x23, x14
    mulhu x30, x18, x9
    sh1add x15, x18, x28
    mulhu x28, x30, x6
    ror x17, x25, x16
    bclr x8, x9, x9
    xori x29, x24, -1251
    bclr x19, x31, x23
    rem x21, x10, x20
    srl x6, x16, x26
    rev8 x29, x17
    remu x16, x24, x18
    div x12, x10, x12
    sh1add x17, x5, x16
    cpop x10, x13
    andi x29, x30, -407
    sw x8, 196(gp)
    lw x31, 196(gp)
    sub x12, x24, x20
    rol x23, x13, x26
    slt x19, x24, x5
    sll x24, x14, x28
    divu x9, x28, x13
    andi x24, x7, -1199
    sh2add x20, x10, x14
    bseti x12, x25, 5
    sh1add x6, x15, x27
    ror x15, x18, x27
    bset x19, x14, x26
    blt x29, x8, .L_br_53
    addi x10, x10, 1
.L_br_53:
    max x5, x26, x12
    rem x20, x10, x19
    andn x5, x22, x16
    maxu x15, x14, x8
    sw x17, 236(gp)
    lw x16, 236(gp)
    slt x9, x14, x20
    sw x30, 172(gp)
    lw x26, 172(gp)
    orc.b x13, x5
    divu x28, x23, x14
    sw x23, 228(gp)
    lw x13, 228(gp)
    mulh x31, x23, x29
    rol x15, x13, x15
    blt x30, x22, .L_br_54
    addi x22, x22, 1
.L_br_54:
    andi x24, x14, 290
    div x11, x24, x25
    ror x31, x17, x12
    sw x9, 80(gp)
    lw x17, 80(gp)
    sh2add x9, x17, x27
    andi x17, x28, -944
    bset x14, x19, x9
    sh3add x19, x16, x12
    sll x19, x16, x20
    rem x14, x24, x20
    mulh x31, x13, x22
    xori x21, x11, -1799
    orn x9, x22, x11
    mulhsu x16, x25, x14
    sw x16, 168(gp)
    lw x28, 168(gp)
    mulh x17, x23, x22
    xori x9, x5, -205
    ror x16, x24, x20
    sw x24, 120(gp)
    lw x11, 120(gp)
    sub x27, x19, x28
    mulh x14, x31, x30
    xor x18, x31, x18
    bgeu x27, x22, .L_br_55
    addi x17, x17, 1
.L_br_55:
    sltu x23, x12, x20
    slli x15, x5, 22
    bseti x21, x10, 20
    sub x29, x18, x17
    sw x28, 144(gp)
    lw x17, 144(gp)
    add x14, x11, x22
    sw x31, 116(gp)
    lw x27, 116(gp)
    rem x27, x9, x6
    maxu x8, x18, x13
    sh1add x28, x28, x15
    bltu x22, x15, .L_br_56
    addi x6, x6, 1
.L_br_56:
    rem x29, x20, x20
    srai x10, x8, 0
    mulhu x13, x31, x20
    slt x19, x12, x29
    bge x11, x6, .L_br_57
    addi x10, x10, 1
.L_br_57:
    sw x31, 124(gp)
    lw x26, 124(gp)
    slti x22, x7, -645
    sub x7, x17, x11
    mulhu x23, x31, x15
    binvi x17, x17, 5
    rol x18, x6, x18
    slti x9, x14, -97
    rol x12, x29, x20
    slli x14, x27, 13
    sext.b x21, x31
    sw x28, 108(gp)
    lw x12, 108(gp)
    sw x7, 132(gp)
    lw x22, 132(gp)
    binv x9, x8, x29
    binv x6, x29, x19
    sltu x12, x10, x14
    div x11, x22, x21
    blt x20, x30, .L_br_58
    addi x13, x13, 1
.L_br_58:
    sw x27, 256(gp)
    lw x14, 256(gp)
    sh3add x15, x29, x28
    mulhu x23, x21, x24
    bltu x16, x6, .L_br_59
    addi x19, x19, 1
.L_br_59:
    addi x7, x21, -1285
    srl x21, x18, x25
    max x31, x16, x15
    sltiu x19, x28, 87
    sw x6, 56(gp)
    lw x17, 56(gp)
    slt x20, x28, x29
    zext.h x14, x17
    sw x22, 208(gp)
    lw x14, 208(gp)
    ctz x8, x10
    bset x16, x19, x9
    cpop x8, x19
    xori x25, x16, -1807
    bseti x16, x20, 23
    slt x29, x26, x27
    sw x14, 176(gp)
    lw x16, 176(gp)
    xnor x24, x23, x17
    maxu x22, x10, x11
    mul x11, x17, x10
    sh2add x21, x12, x22
    slt x10, x23, x18
    xnor x9, x22, x16
    ror x15, x9, x25
    ror x16, x14, x27
    addi x18, x28, 1629
    sw x13, 108(gp)
    lw x28, 108(gp)
    divu x9, x31, x21
    xori x8, x13, -1255
    bext x8, x26, x8
    sub x10, x29, x9
    add x9, x6, x20
    blt x29, x26, .L_br_60
    addi x19, x19, 1
.L_br_60:
    sext.b x22, x12
    div x24, x30, x15
    cpop x18, x26
    sh2add x7, x23, x7
    bclri x20, x10, 30
    slti x9, x19, -1233
    slli x23, x29, 30
    bgeu x26, x14, .L_br_61
    addi x30, x30, 1
.L_br_61:
    and x7, x31, x31
    bge x21, x15, .L_br_62
    addi x28, x28, 1
.L_br_62:
    max x6, x8, x14
    sw x31, 212(gp)
    lw x9, 212(gp)
    xori x26, x17, 547
    bltu x15, x13, .L_br_63
    addi x22, x22, 1
.L_br_63:
    bgeu x22, x20, .L_br_64
    addi x25, x25, 1
.L_br_64:
    srai x28, x18, 8
    sh2add x9, x29, x31
    mulhsu x5, x11, x14
    slt x15, x5, x13
    mulhu x9, x15, x16
    max x27, x18, x28
    sub x11, x15, x29
    andi x22, x27, -953
    sltiu x5, x13, 1670
    orc.b x18, x26
    remu x30, x19, x23
    mulhsu x11, x14, x10
    bge x15, x16, .L_br_65
    addi x26, x26, 1
.L_br_65:
    sw x22, 212(gp)
    lw x22, 212(gp)
    minu x11, x31, x26
    srli x6, x29, 28
    clz x11, x5
    bseti x22, x26, 7
    sh2add x5, x26, x11
    sltiu x9, x25, 1184
    minu x6, x22, x10
    maxu x23, x11, x14
    and x5, x25, x26
    srai x22, x18, 16
    binvi x23, x8, 26
    mulhsu x28, x26, x7
    sh2add x17, x16, x22
    clz x7, x14
    sw x24, 140(gp)
    lw x9, 140(gp)
    max x8, x6, x27
    ori x30, x12, -1174
    xor x11, x9, x5
    srl x25, x17, x12
    ori x15, x26, 89
    sw x19, 116(gp)
    lw x15, 116(gp)
    rev8 x22, x23
    orn x19, x30, x14
    srl x14, x16, x31
    mulhu x28, x13, x28
    remu x17, x30, x30
    bne x25, x19, .L_br_66
    addi x7, x7, 1
.L_br_66:
    orc.b x25, x11
    divu x27, x11, x6
    mulh x17, x29, x31
    mulhsu x21, x8, x26
    remu x5, x18, x5
    binv x24, x12, x28
    maxu x29, x6, x12
    bltu x11, x9, .L_br_67
    addi x6, x6, 1
.L_br_67:
    sub x5, x20, x31
    sw x7, 96(gp)
    lw x12, 96(gp)
    sw x29, 236(gp)
    lw x24, 236(gp)
    bclr x22, x23, x5
    div x22, x15, x17
    beq x8, x17, .L_br_68
    addi x26, x26, 1
.L_br_68:
    orc.b x6, x27
    binv x10, x19, x16
    sext.h x14, x25
    sw x6, 52(gp)
    lw x22, 52(gp)
    slli x20, x11, 18
    mul x24, x26, x17
    xor x22, x9, x15
    sltu x11, x14, x24
    sh2add x19, x15, x29
    div x29, x18, x12
    sh3add x12, x17, x20
    mulhu x16, x28, x13
    min x17, x13, x7
    sw x22, 68(gp)
    lw x9, 68(gp)
    sw x14, 240(gp)
    lw x15, 240(gp)
    sltiu x10, x28, 571
    andn x28, x19, x19
    bexti x21, x25, 16
    xori x11, x31, -120
    mulhsu x31, x28, x17
    # Success write to tohost (0x20000000 = 1)
    li t0, 0x20000000
    li t1, 1
    sw t1, 0(t0)
1:  j 1b
