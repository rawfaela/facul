/* Elabore um algoritmo que leia a idade e o estado civil (C – casado, S – solteiro, V – viúvo, e D –
desquitado ou separado) de várias pessoas. Considere que o algoritmo termina quando se digita um
número menor do que 0 para a idade. Ao final, calcule e imprima:
a. A quantidade de pessoas casadas;
b. A quantidade de pessoas solteiras;
c. A média das idades das pessoas viúvas;
d. A porcentagem de pessoas desquitadas ou separadas, dentre todas as pessoas analisadas */

#include<stdio.h>
#include<ctype.h>

main()
{
	int idade = 1, casado = 0, solteiro = 0, viuvo = 0, separado = 0, cont = 0, contvi = 0;
	char estciv;
	float media = 0, porc = 0;
	
	while (idade >= 0)
	{
		printf("digite a idade: ");
		scanf("%i",&idade);
		
		if (idade >= 0)
		{
			printf("C - casado \nS - solteiro \nV - viuvo \nD - desquitado ou separado\ndigite o estado civil: ");
			scanf(" %c", &estciv);
			estciv = toupper(estciv);
			cont += 1;
			
			if (estciv == 'C')
			{
				casado += 1;
			}
			else if (estciv == 'S')
			{
				solteiro += 1;
			}
			else if (estciv == 'V')
			{
				viuvo += idade;
				contvi += 1;
			}
			else if (estciv == 'D')
			{
				separado += 1;
			}
		}
	}
	if (contvi != 0)
	{
		media = (float) viuvo/contvi;	
	}
	printf("%i", separado);
	printf("%i", cont);
	porc = (float) separado/cont*100;
	printf("\npessoas casadas: %i", casado);
	printf("\npessoas solteiras: %i",solteiro);
	printf("\nmedia idade pessoas viuvas: %.2f",media);
	printf("\nporc pessoas dequitadas ou separadas: %.2f%%",porc);
}
