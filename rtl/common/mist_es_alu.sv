// ============================================================================
// mist_es_alu.sv — Combinational RV32I + RV32B (Zba, Zbb, Zbs) ALU.
// ============================================================================
`include "mist_es_pkg.sv"

module mist_es_alu
  import mist_es_pkg::*;
(
  input  alu_op_e          op,
  input  logic [XLEN-1:0]  a,
  input  logic [XLEN-1:0]  b,
  output logic [XLEN-1:0]  y
);
  wire [4:0] shamt = b[4:0];
  wire        bext_bit = a[shamt];

  // Pure combinational priority encoders (zero simulation overhead, glitch-free)
  wire [5:0] clz_val =
    a[31] ? 6'd0 :
    a[30] ? 6'd1 :
    a[29] ? 6'd2 :
    a[28] ? 6'd3 :
    a[27] ? 6'd4 :
    a[26] ? 6'd5 :
    a[25] ? 6'd6 :
    a[24] ? 6'd7 :
    a[23] ? 6'd8 :
    a[22] ? 6'd9 :
    a[21] ? 6'd10 :
    a[20] ? 6'd11 :
    a[19] ? 6'd12 :
    a[18] ? 6'd13 :
    a[17] ? 6'd14 :
    a[16] ? 6'd15 :
    a[15] ? 6'd16 :
    a[14] ? 6'd17 :
    a[13] ? 6'd18 :
    a[12] ? 6'd19 :
    a[11] ? 6'd20 :
    a[10] ? 6'd21 :
    a[9] ? 6'd22 :
    a[8] ? 6'd23 :
    a[7] ? 6'd24 :
    a[6] ? 6'd25 :
    a[5] ? 6'd26 :
    a[4] ? 6'd27 :
    a[3] ? 6'd28 :
    a[2] ? 6'd29 :
    a[1] ? 6'd30 :
    a[0] ? 6'd31 :
    6'd32;

  wire [5:0] ctz_val =
    a[0] ? 6'd0 :
    a[1] ? 6'd1 :
    a[2] ? 6'd2 :
    a[3] ? 6'd3 :
    a[4] ? 6'd4 :
    a[5] ? 6'd5 :
    a[6] ? 6'd6 :
    a[7] ? 6'd7 :
    a[8] ? 6'd8 :
    a[9] ? 6'd9 :
    a[10] ? 6'd10 :
    a[11] ? 6'd11 :
    a[12] ? 6'd12 :
    a[13] ? 6'd13 :
    a[14] ? 6'd14 :
    a[15] ? 6'd15 :
    a[16] ? 6'd16 :
    a[17] ? 6'd17 :
    a[18] ? 6'd18 :
    a[19] ? 6'd19 :
    a[20] ? 6'd20 :
    a[21] ? 6'd21 :
    a[22] ? 6'd22 :
    a[23] ? 6'd23 :
    a[24] ? 6'd24 :
    a[25] ? 6'd25 :
    a[26] ? 6'd26 :
    a[27] ? 6'd27 :
    a[28] ? 6'd28 :
    a[29] ? 6'd29 :
    a[30] ? 6'd30 :
    a[31] ? 6'd31 :
    6'd32;

  wire [5:0] cpop_val = {5'd0, a[0]} + {5'd0, a[1]} + {5'd0, a[2]} + {5'd0, a[3]} + {5'd0, a[4]} + {5'd0, a[5]} + {5'd0, a[6]} + {5'd0, a[7]} + {5'd0, a[8]} + {5'd0, a[9]} + {5'd0, a[10]} + {5'd0, a[11]} + {5'd0, a[12]} + {5'd0, a[13]} + {5'd0, a[14]} + {5'd0, a[15]} + {5'd0, a[16]} + {5'd0, a[17]} + {5'd0, a[18]} + {5'd0, a[19]} + {5'd0, a[20]} + {5'd0, a[21]} + {5'd0, a[22]} + {5'd0, a[23]} + {5'd0, a[24]} + {5'd0, a[25]} + {5'd0, a[26]} + {5'd0, a[27]} + {5'd0, a[28]} + {5'd0, a[29]} + {5'd0, a[30]} + {5'd0, a[31]};

  always_comb begin
    unique case (op)
      // ---- Base RV32I ------------------------------------------------------
      ALU_ADD:    y = a + b;
      ALU_SUB:    y = a - b;
      ALU_SLL:    y = a << shamt;
      ALU_SLT:    y = ($signed(a) < $signed(b)) ? 32'd1 : 32'd0;
      ALU_SLTU:   y = (a < b)                   ? 32'd1 : 32'd0;
      ALU_XOR:    y = a ^ b;
      ALU_SRL:    y = a >> shamt;
      ALU_SRA:    y = $unsigned($signed(a) >>> shamt);
      ALU_OR:     y = a | b;
      ALU_AND:    y = a & b;
      ALU_PASS_B: y = b;

      // ---- Zba: Address generation ----------------------------------------
      ALU_SH1ADD: y = (a << 1) + b;
      ALU_SH2ADD: y = (a << 2) + b;
      ALU_SH3ADD: y = (a << 3) + b;

      // ---- Zbb: Bitwise logic & comparisons --------------------------------
      ALU_ANDN:   y = a & ~b;
      ALU_ORN:    y = a | ~b;
      ALU_XNOR:   y = ~(a ^ b);
      ALU_MIN:    y = ($signed(a) < $signed(b)) ? a : b;
      ALU_MAX:    y = ($signed(a) > $signed(b)) ? a : b;
      ALU_MINU:   y = (a < b) ? a : b;
      ALU_MAXU:   y = (a > b) ? a : b;

      // ---- Zbb: Sign/zero extensions ---------------------------------------
      ALU_SEXT_B: y = {{24{a[7]}}, a[7:0]};
      ALU_SEXT_H: y = {{16{a[15]}}, a[15:0]};
      ALU_ZEXT_H: y = {16'b0, a[15:0]};

      // ---- Zbb: Rotations & Permutations -----------------------------------
      ALU_ROL:    y = (a << shamt) | (a >> (6'd32 - {1'b0, shamt}));
      ALU_ROR:    y = (a >> shamt) | (a << (6'd32 - {1'b0, shamt}));
      ALU_REV8:   y = {a[7:0], a[15:8], a[23:16], a[31:24]};
      ALU_ORC_B:  y = {{8{|a[31:24]}}, {8{|a[23:16]}}, {8{|a[15:8]}}, {8{|a[7:0]}}};

      // ---- Zbb: Counts -----------------------------------------------------
      ALU_CLZ:    y = {26'b0, clz_val};
      ALU_CTZ:    y = {26'b0, ctz_val};
      ALU_CPOP:   y = {26'b0, cpop_val};

      // ---- Zbs: Single-bit operations --------------------------------------
      ALU_BSET:   y = a | (32'd1 << shamt);
      ALU_BCLR:   y = a & ~(32'd1 << shamt);
      ALU_BINV:   y = a ^ (32'd1 << shamt);
      ALU_BEXT:   y = {31'b0, bext_bit};

      default:    y = '0;
    endcase
  end
endmodule
