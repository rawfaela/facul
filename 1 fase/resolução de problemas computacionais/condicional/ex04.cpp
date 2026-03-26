/*Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra na tabela a seguir:
	Média Aritmética 			Mensagem
0,0 fechado, aberto 3,0 		Reprovado
3,0 fechado, aberto 7,0 		Exame
7,0 fechado, fechado 10,0 		Aprovado */

#include<stdio.h>
main()
{
	float nota1, nota2, media;
	printf("digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1+nota2)/2;
	if (media>=7){
		printf("aprovado, media:  %.2f", media);
	}
	else if (media >= 3){
		printf("exame, media:  %.2f",media);
	}
	else{
		printf("reprovado, media:  %.2f", media);
	}
}
