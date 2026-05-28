/*  Faça um programa que receba vários números, calcule e mostre:
  • a soma dos números digitados;
  • a quantidade de números digitados;
  • a média dos números digitados;
  • o maior número digitado;
  • o menor número digitado;
  • a média dos números pares;
  • porcentagem dos números ímpares entre todos os números digitados. 
  Finalize a entrada de dados com a digitação do número 30.000. */
  
#include<stdio.h>
#include <math.h>

main()
{
	float num = 0, soma = 0, maior = -999999999, menor = 9999999999, somaP = 0, somaI = 0;
	int cont = 0, contP = 0;
	
	printf("digite um numero qualquer: ");
	scanf("%f",&num);
	while (num != 30000)
	{	
		soma += num;
		cont += 1;	
		
		if (num > maior)
		{
			maior = num;
		}
		if (num < menor)
		{
			menor = num;
		}
		
		if (fmod(num, 1.0) == 0.0)
		{
	    if (fmod(num, 2.0) == 0.0) 
			{
	      contP += 1;
				somaP += num;
	    } 
			else 
			{
	      somaI += 1;
	    }
		}
		else
		{
			somaI += 1;
		}
		
		printf("digite um numero qualquer: ");
		scanf("%f",&num);
	}
  
	printf("\nsoma: %.2f",soma);
	printf("\nqtd: %i",cont);
	printf("\nmedia: %.2f",(soma/cont));
	printf("\nmaior: %.2f",maior);
	printf("\nmenor: %.2f",menor);
	printf("\nmedia numeros pares: %.2f",(somaP/contP));
	printf("\nporc. de numeros impares: %.2f", (somaI/cont*100));
}
