#include <stdio.h>
main(void){
	int num, sum=0, i;
	
	for(i=385; i<933; i++){
		if(i%2==0){
			printf("\n%d", i);
			sum=sum+i;
		}
	}
	printf("\n\n\n%d", sum);
}
