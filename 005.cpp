#include <stdio.h>
main(void){
	int a,b,sum;
	
	printf("Insira o primeiro inteiro: ");
	scanf("%d", &a);
	printf("\nInsira o segundo inteiro: ");
	scanf("%d", &b);
	printf("A soma do primeiro com o segundo numero eh: %d\n\n", a+b);
	if(a+b>1000)
		printf("\nA suma dos valores eh maior que 1000!");
	else if(a+b<1000)
		printf("\nA soma dos valores eh menor que 1000!");
	else 
		printf("A soma dos valores eh 1000!!");
}
