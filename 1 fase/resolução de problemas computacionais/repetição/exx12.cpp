// Faça um programa que receba o salário de um funcionário chamado Carlos. Sabe-se que outro funcionário, João, tem salário equivalente a um terço do salário de Carlos. Carlos aplicará seu salário integralmente na caderneta de poupança, que rende 2% ao mês, e João aplicará seu salário integralmente no fundo de renda fixa, que rende 5% ao mês. O programa deverá calcular e mostrar a quantidade de meses necessários para que o valor pertencente a João iguale ou ultrapasse o valor pertencente a Carlos.
  
#include<stdio.h>
#include <string.h>
main()
{
	char nome[50];
	float salcarlos = 0, saljoao = 0;
	int meses = 0;
	
	printf("digite seu nome: ");
	gets(nome);
	
	if (strcmp(nome, "Carlos") == 0 || strcmp(nome, "carlos") == 0)
	{
		printf("digite seu salario: ");
		scanf("%f",&salcarlos);
		
		saljoao = salcarlos/3;
		
		while (salcarlos > saljoao)
		{
			meses += 1;
			salcarlos = salcarlos * 1.02;
			saljoao = saljoao * 1.05;
		}
		printf("\n\nmeses necessarios p ultrapassar o salario de carlos: %i",meses);
		printf("\nsalcarlos final: %.2f", salcarlos);
		printf("\nsaljoao final: %.2f",saljoao);
	}	
	else 
	{
		printf("seu nome nao e carlos, sai.");
	}
}
