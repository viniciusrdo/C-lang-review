#include <stdio.h>
main(void){
	int idade[5], i, j, sum_idade=0, mid_idade=0, contI=0, contH=0;
	float altura[5], sum_altura=0.0, mid_altura=0.0;
	
	for(i=1; i<=5;i++){
		printf("\nInsira respectivamente a idade e a altura do %d aluno : ", i);
		scanf("%d", &idade[i]);
		scanf("%f", &altura[i]);
	}
	for(i=1; i<=5;i++){
		if(altura[i]<1.7){
			sum_idade = sum_idade + idade[i];
			contI++;
		}
	}
	for(j=1; j<=5; j++){
		if(idade[j]>20){
			sum_altura = sum_altura + altura[j];
			contH++; 	
		}
	}
	
	mid_idade = sum_idade / contI;
	mid_altura = sum_altura / contH;
	
	printf("\n\n%d\n\n%f", mid_idade, mid_altura);
}
