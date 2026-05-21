//Elabore um algoritmo que leia a idade e sexo (M– masculino, F – feminino) de várias pessoas. Calcule e imprima a idade média, total de pessoas do sexo feminino, e o total de pessoas do sexo masculino. O algoritmo termina quando se digita 0 para a idade. 

#include<stdio.h>
#include<ctype.h>
main()
{
	int idade = 1, masc = 0, fem = 0, cont = 0;
	char sexo;
	float soma = 0;
	
	while (idade != 0)
	{
		printf("digite a idade: ");
		scanf("%i",&idade);
		if (idade != 0)	
		{
			printf("digite o sexo (M/F): ");
			scanf(" %c",&sexo);
			sexo = toupper(sexo);
			if (sexo == 'M')
			{
				masc += 1;
			}
			else if (sexo == 'F')
			{
				fem += 1;
			}
			soma += idade;
			cont += 1;
		}
	}
	printf("idade media: %.2f", soma/cont);
	printf("\ntotal sexo fem: %i", fem);
	printf("\ntotal sexo masc: %i", masc);
}
