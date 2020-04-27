//8. Construa um algoritmo que verifique se um número fornecido pelo usuário é primo ou não. 
#include <stdio.h>
#include <locale.h>

main()
{

setlocale(LC_ALL, "portuguese");

int a , b , c=0;

printf("Digite um número para verificar se ele é primo: ");
scanf("%d" , &a);

for(b=2;b<=a/2;b++){
	
	if(a%b==0){
		c++;
		break;
	
	}
}
	

 if(c==0){
 	printf("O número %d é primo" , a);
 }
 else{
 

	printf("O número %d não é primo" , a);
	
	}
}


























