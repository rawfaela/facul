/* Elabore um algoritmo que entre com 5 notas de cada aluno de uma turma de 20 alunos e imprima:
a. A média de cada aluno;
b. A média da turma;
c. O percentual de alunos que tiveram médias maiores ou iguais a 5,0. */

#include<stdio.h>
main()
{
	float soma, nota, nota_turma = 0 ;
	for (int i = 1; i <=20; i++)
	{	
		soma = 0;
		for (int x = 1; x<= 5; x++)
		{
			printf("digite a nota %i do aluno %i: ",x,i);
			scanf("%f",&nota);
			soma += nota;
		}
		printf("\nmedia do aluno %i: %.2f\n\n",i,soma/5);
		nota_turma += soma;
	}
	printf("\nmedia da turma: %.2f",nota_turma/100);
}
