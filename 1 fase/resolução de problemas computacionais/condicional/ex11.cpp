/*Escreva um algoritmo para calcular e mostrar o salário reajustado de um funcionário. O
percentual de aumento encontra-se na tabela a seguir.
    Salário         Percentual de aumento
Até R$ 1500,00               35%
Acima de 1500,00             15% */

#include<stdio.h>

main()
{
	float sal;
	printf("digite o salario: ");
	scanf("%f", &sal);
	
	if (sal<=1500){
		printf("salario reajustado: %.2f", sal*1.35);	
	}
	else{
		printf("salario reajustado: %.2f", sal*1.15);
	}
}
