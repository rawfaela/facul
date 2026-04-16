/* Um endocrinologista deseja controlar a saúde de seus pacientes e, para isso, utiliza o Índice
de Massa Corporal (IMC). Sabendo que o IMC é calculado por meio da seguinte fórmula:
IMC = peso
altura2
Onde:
- peso é dado em Kg
- altura é dada em metros
Elabore um algoritmo que leia o nome, o peso e a altura de um paciente, e apresente o
nome do paciente e sua faixa de risco, baseando-se na seguinte tabela:
      IMC                 Faixa de Risco
Abaixo de 20              Abaixo do peso
A partir de 20 até 25         Normal
Acima de 25 até 30       Excesso de peso
Acima de 30 até 35           Obesidade
Acima de 35              Obesida Mórbida */


#include<stdio.h>
#include<math.h>

int main()
{
	char nome[50];
	float peso, altura, imc;
	
	printf("digite o nome: ");
	scanf("%s", &nome);
	printf("digite o peso (kg): ");
	scanf("%f",&peso);
	printf("digite a altura (m): ");
	scanf("%f", &altura);
	
	imc = peso/(pow(altura,2));
	
	if (imc<20)
	{
		printf("O paciente %s, com IMC igual a %.2f esta na faixa de risco 'abaixo do peso'", imc, nome);		
	} 
	else if (imc<=25)
	{
		printf("O paciente %s, com IMC igual a %.2f esta na faixa de risco 'normal'", imc, nome);		
	}
	else if (imc<=30)
	{
		printf("O paciente %s, com IMC igual a %.2f esta na faixa de risco 'excesso de peso'", imc, nome);		
	}
	else if (imc<=35)
	{
		printf("O paciente %s, com IMC igual a %.2f esta na faixa de risco 'obesidade'", imc, nome);		
	}
	else 
	{
		printf("O(A) paciente %s, com IMC igual a %.2f esta na faixa de risco 'obesidade morbida'", imc, nome);		
	}
}
