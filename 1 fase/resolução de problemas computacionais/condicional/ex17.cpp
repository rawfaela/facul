/* Faça um algoritmo que receba a idade e o peso de uma pessoa. De acordo com a tabela a
seguir, verifique e mostre em qual grupo de risco essa pessoa se encaixa.
IDADE                               PESO
                  Até 60       Entre 60 e 90       Acima de 90
Menores que 20     9                 8                   7
De 20 a 50         6                 5                   4
Maiores que 50     3                 2                   1  */

#include<stdio.h>
main()
{
	int idade;
	float peso;
	printf("digite idade: ");
	scanf("%i", &idade);
	printf("digite peso: ");
	scanf("%f",&peso);
	
	if (idade<20){
		if (peso<=60){
			printf("grupo de risco 9");
		} else if(peso<=90){
			printf("grupo de risco 8");
		} else{
			printf("grupo de risco 7");
		}
	} else if(idade<=50){
		if (peso<=60){
			printf("grupo de risco 6");
		} else if(peso<=90){
			printf("grupo de risco 5");
		} else{
			printf("grupo de risco 4");
		}
	} else{
		if (peso<=60){
			printf("grupo de risco 3");
		} else if(peso<=90){
			printf("grupo de risco 2");
		} else{
			printf("grupo de risco 1");
		}
	}
}
