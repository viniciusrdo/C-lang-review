//6. Escreva um algoritmo que leia um conjunto de 20 n�meros inteiros e mostre qual foi o maior e o menor valor fornecido.
#include <stdio.h>
#include<locale.h>
int main()

{
setlocale(LC_ALL, "Portuguese"); 
int num, maior ,menor,i ;
for(i=0;i<20;i++){
	printf("Digite um n�mero :\n");
	scanf("%i", &num);
	if(i==0){
		maior=num;
		menor=num;
	}
	else{
		if(num>maior)
		maior=num;
		if(num<menor)
		menor=num;
	}
}
printf("O maior n�mero � :%i", maior);
printf("\nO menor n�mero � :%i", menor);
return 0;
}
