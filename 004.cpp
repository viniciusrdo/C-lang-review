#include <stdio.h>
main(void){
	int i, j;
	
	for(i=1;i<=13;i++){
		for(j=1; j<=13; j++){
			printf("\t%d", i*j);
		}
		printf("\n");
	}
}
