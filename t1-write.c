#include "var.h"

int main(int argc, char **argv){
	data_t t1;
	if(argc != 2){
		printf(" Usage is 1) output filename \n");
		exit(0);
	}	
	printf(" size--%ld \n", sizeof t1);
	
	FILE *fp = fopen(argv[1], "wb+");
	if(fp != NULL){
		memset(&t1, 0, sizeof t1);
		t1.L.x_t = setvalue(111, 150000, 1);	
		t1.L.y_t = setvalue(-111, 150000, 1);	
		t1.L.z_t = setvalue(111, 60000, 1);
		fwrite(t1.buffer, sizeof t1, 1, fp);
		fclose(fp);	
	}else{
		printf(" file[%s] not open error no %d \n", argv[1], errno);
		exit(-1);
	}
		
	return 0;
}

