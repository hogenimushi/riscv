declare rvcore {   
    // -- data bus  -- 
    output iadr[32]; 
    input  inst[32]; 
    output dadr[32];   
    input  dati[32]; 
    output dato[32]; 
    // -- control signals -- 
    // processor control
    func_in   start();
    func_out  hlt(); 
    // instruction memory
    func_out  inst_adr(iadr); 
    func_out  inst_read():inst; 
    func_in   inst_rdy();
    // data memory
    func_in   mem_rdy();
    func_out  mem_adr(dadr); 
    func_out  mem_read():dati; 
    func_out  mem_write(dadr,dato); 
    // intrruption
    func_out  int_ack(); 
    func_in   int_req();
    // debug etc.
    func_out  wb(); 
} 
