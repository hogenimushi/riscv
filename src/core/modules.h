/*******************************************************
 * RISC-V implementation
 *   by Hogenimushi
 *******************************************************/
declare rvalu {
  input a[32],b[32],sel[4];
  output o[32];
  func_in exec(a,b,sel):o;
}

declare rvdec{
  input inst[32];
  output o[32];
  func_in set(inst);
  func_out imm(), lui(), auipc(), rtype();
  func_out jal(), jalr(), branch();
  func_out load(), store(), misc_mem(), sys();
  func_in imm_i():o;
  func_in imm_s():o;
  func_in imm_b():o;
  func_in imm_u():o;
  func_in imm_j():o;
}
declare rvcmp {
  input a[32],b[32],sel[3];
  output o;
  func_in exec(a,b,sel):o;
}

declare rvgpr {
  input adr1[5],adr2[5],wadr[5],wdat[32];
  output res1[32],res2[32];
  func_in rs1(adr1):res1;
  func_in rs2(adr2):res2;
  func_in write(wadr,wdat);
}

declare add32 {
  input a[32],b[32],cin;
  output o[32],cout;
  func_in exec(a,b,cin):o;
}

declare sft32 {
  input a[32],sft[5];
  output o[32];
  func_in sll(a,sft):o;
  func_in srl(a,sft):o;
  func_in sra(a,sft):o;
}


