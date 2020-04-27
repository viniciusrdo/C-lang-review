#include <stdio.h>
main(void){
	int i;
	float polegada;
	
	for(i=1; i<=20; i++){
		polegada = i * 2.54;
		printf("%f\n", polegada);
	}
}
