void io_hlt(void);	// 関数のプロトタイプ宣言(外部ファイルの関数)
void write_mem8(int addr, int data);

void HariMain(void){
	int i; // 変数宣言．iは32bitの整数型

	for(i=0xa0000; i<= 0xaffff; i++){
		write_mem8(i, 15); // MOV BYTE [i],15
	}

	for(;;){
		io_hlt();
	}
}
