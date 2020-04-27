#include <stdio.h>
main(void){
	int prod=1, i;
	
	for(i=1;i<=15;i++){
		if(i%2!=0){
			prod= prod*i;
		}
			
	}
	printf("\n%d", prod);
}
