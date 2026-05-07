/* Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que: Esse funcionário foi
contratado em 2005, com salário inicial de R$ 1.000,00.
a) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
b) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do
ano anterior. Faça um programa que determine o salário atual desse funcionário. */

#include<stdio.h>
main()
{
	float porcent, sal;
	
	porcent = 0.015;
	sal = 1015; //salario de 2006
	
	for (int i = 2007; i<=2026; i++) 
	{
		porcent = porcent * 2;
		sal = sal + sal * porcent;
		printf("no ano %d o salario foi de %.2f\n",i,sal);
	}
}
