//8. Construa um algoritmo que verifique se um n�mero fornecido pelo usu�rio � primo ou n�o. 
#include <stdio.h>
#include <locale.h>

main()
{

setlocale(LC_ALL, "portuguese");

int a , b , c=0;

printf("Digite um n�mero para verificar se ele � primo: ");
scanf("%d" , &a);

for(b=2;b<=a/2;b++){
	
	if(a%b==0){
		c++;
		break;
	
	}
}
	

 if(c==0){
 	printf("O n�mero %d � primo" , a);
 }
 else{
 

	printf("O n�mero %d n�o � primo" , a);
	
	}
}


























