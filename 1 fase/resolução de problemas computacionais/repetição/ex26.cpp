/* Elabore um algoritmo que leia duas notas de 6 alunos, calcule e mostre:
a. A média aritmética das duas notas de cada aluno;
b. A mensagem, conforme tabela a seguir:
  Média Aritmética   Mensagem
  Até 3.0            Reprovado
  Entre 3.0 e 7.0      Exame
  Acima de 7.0       Aprovado
c. O total de alunos aprovados;
d. O total de alunos de exame;
e. O total de alunos reprovados;
f. A média da classe */

#include<stdio.h>
main()
{
	float nota1 = 0, nota2 = 0, media = 0, somaT = 0;
	int contA = 0, contE = 0, contR = 0;
	
	for (int i = 1; i <= 6; i++)
	{
		printf("digite a primeira nota do aluno %i: ",i);
		scanf("%f",&nota1);
		printf("digite a segunda nota do aluno %i: ",i);
		scanf("%f",&nota2);
		
		media = (nota1 + nota2)/2;
		printf("A media do aluno %i foi: %.2f \n",i,media);
		
		somaT += media;
				
		if (media <= 3)
		{
			printf("Aluno %i reprovado.\n",i);
			contR += 1;
		}
		else if (media <= 7)
		{
			printf("Aluno %i em exame.\n",i);
			contE += 1;
		}
		else 
		{
			printf("Aluno %i aprovado.\n",i);
			contA += 1;
		}
	}
	printf("Total de alunos aprovados: %i",contA);
	printf("\nTotal de alunos em exame: %i",contE);
	printf("\nTotal de alunos reprovados: %i",contR);
	printf("\nMedia da classe: %.2f",(somaT/6));
}
