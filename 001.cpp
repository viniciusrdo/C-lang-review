#include <stdio.h>
main(void){
	float num;
	
	printf("Insira um numero, mano: ");
	scanf("%f", &num);
	while(num>1){
		num= num/2;
	}
	printf("\n\n\n\n%f", num);
}
