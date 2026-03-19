/* Elabore um algoritmo que leia o número de horas trabalhadas por um funcionário, e o valor do salário
mínimo estabelecido por lei. Calcule e mostre o salário a receber desse funcionário, seguindo as regras
abaixo:
1ª) A hora trabalhada vale 1/8 do salário mínimo
2ª) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora
trabalhada
3ª) O imposto equivale a 3% do salário bruto
4ª) O salário a receber equivale ao salário bruto menos o imposto */

#include<stdio.h>
main()
{
	float horas, salmin, horatrab, salbruto;
	printf("digite as horas trabalhadas: ");
	scanf("%f", &horas);
	printf("digite o salario minimo: ");
	scanf("%f", &salmin);
	
	horatrab = salmin/8;
	salbruto = horatrab * horas;
	printf("salario a receber: %.2f", (salbruto*0.97));
}
