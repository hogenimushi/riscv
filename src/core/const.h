
//OP field
#define OP_IMM      0b0010011
#define OP_LUI      0b0110111
#define OP_AUIPC    0b0010111
#define OP_RTYPE    0b0110011
#define OP_JAL      0b1101111
#define OP_JALR     0b1100111
#define OP_BRANCH   0b1100011
#define OP_LOAD     0b0000011
#define OP_STORE    0b0100011
#define OP_MISC_MEM 0b0001111
#define OP_SYSTEM   0b1110011

// funct3 bits for BRANCH
#define FBR_BEQ   0b000
#define FBR_BNE   0b001
#define FBR_BLT   0b100
#define FBR_BGE   0b101
#define FBR_BLTU  0b110
#define FBR_BGEU  0b111
// funct3 bit for LOAD
#define FLD_LB  0b000
#define FLD_LH  0b001
#define FLD_LW  0b010
#define FLD_LBU 0b100
#define FLD_LHU 0b101
// ALU operations
#define ALU_ADD  0b0000
#define ALU_SUB  0b1000
#define ALU_SLL  0b0001
#define ALU_SLT  0b0010
#define ALU_SLTU 0b0011
#define ALU_XOR  0b0100
#define ALU_SRL  0b0101
#define ALU_SRA  0b1101
#define ALU_OR   0b0110
#define ALU_AND  0b0111
// comparator operations
#define CMP_EQ  0b000
#define CMP_NE  0b001
#define CMP_LT  0b100
#define CMP_GE  0b101
#define CMP_LTU 0b110
#define CMP_GEU 0b111
