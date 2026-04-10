/* Faça um algoritmo que receba o preço de um produto e seu código de origem e mostre sua
procedência. A procedência obedece à tabela a seguir.
CÓDIGO DE ORIGEM    PROCEDÊNCIA
1                       Sul
2                      Norte
3                      Leste
4                      Oeste
5 ou 6                Nordeste
7 ou 8 ou 9           Sudeste
10 a 20             Centro-oeste
21 a 30               Nordeste */

#include<stdio.h>
main()
{
	float preco;
	int cod;
	printf("digite preco: ");
	scanf("%f", &preco);
	printf("digite codigo origem: ");
	scanf("%i", &cod);
	
	if(cod==1){
		printf("sul");
	} else if(cod==2){
		printf("norte");
	} else if(cod==3){
		printf("leste");
	} else if(cod==4){
		printf("oeste");
	} else if(cod==5 or cod==6){
		printf("nordeste");
	} else if(cod<=9 and cod>=7){
		printf("sudeste");
	} else if(cod<=20 and cod>=10){
		printf("centro-oeste");
	} else if(cod<=30 and cod>=21){
		printf("nordeste"); //prof deve ter colocado errado
	} else{
		printf("nao e opcao");
	}
}
