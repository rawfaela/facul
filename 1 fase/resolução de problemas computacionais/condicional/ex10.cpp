//Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 1.500,00. Escreva um algoritmo em que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso ele não tenha direito ao aumento

#include<stdio.h>

main()
{
	float sal;
	printf("digite o salario: ");
	scanf("%f", &sal);
	
	if (sal<1500){
		printf("salario reajustado: %.2f", sal*1.3);	
	}
	else{
		printf("nao tem direito ao aumento");
	}
}
