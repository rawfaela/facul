//Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a mensagem aprovado ou reprovado, considerando média 6.

#include<stdio.h>
main()
{
	float nota1, nota2, nota3, nota4, media;
	printf("digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("digite a terceira nota: ");
	scanf("%f", &nota3);
	printf("digite a quarta nota: ");
	scanf("%f", &nota4);
	
	media = (nota1+nota2+nota3+nota4)/4;
	if (media >= 6){
		printf("aprovado com media %.2f",media);
	}
	else {
		printf("reprovado com media %.2f", media);
	}
}
