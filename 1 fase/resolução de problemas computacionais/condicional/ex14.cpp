/* Faça um algoritmo que receba o salário atual de um funcionário e, usando a tabela a seguir,
calcule e mostre o valor do aumento e o novo salário.
Salário                   Percentual de aumento
Abaixo de R$3.000,00               15%
R$ 3.000,00 R$ 6.000,00            10%
R$ 6.000,00 R$ 9.000,00             5%
Acima de R$ 9.000,00                0% */

#include<stdio.h>
main()
{
	float sal;
	printf("digite salario: ");
	scanf("%f", &sal);
	
	if(sal<3000){
		printf("Valor do aumento: %.2f. Novo salario: %.2f", (sal*0.15), (sal*1.15));
	} else if(sal<6000){
		printf("Valor do aumento: %.2f. Novo salario: %.2f", (sal*0.1), (sal*1.1));		
	} else if(sal<=9000){
		printf("Valor do aumento: %.2f. Novo salario: %.2f", (sal*0.05), (sal*1.05));
	} else{
		printf("Valor do aumento: %.2f. Novo salario: %.2f", sal, sal);
	}

}
