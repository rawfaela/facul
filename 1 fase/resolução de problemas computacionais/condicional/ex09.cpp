/*Faça um programa que receba dois números e execute as operações listadas a seguir, de
acordo com a escolha do usuário. Se for digitada uma opção inválida, mostre uma
mensagem de erro e termine a execução do programa. As opções são:
a) O primeiro número elevado ao segundo.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números. */


#include<stdio.h>
#include<math.h>
main()
{
	int op;
	float num1, num2;
	printf("digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("digite o segundo numero: ");
	scanf("%f", &num2);
	printf("1-Primeiro numero elevado ao segundo.\n2-Raiz quadrada de cada numero.\n3-Raiz cubica de cada numero\nEscolha uma opcao: ");
	scanf("%i", &op);
	
	
	if (op==1){
		printf("%.2f", pow(num1,num2));
	}
	else if(op==2){
		printf("%.2f",sqrt(num1));
		printf("\n%.2f",sqrt(num2));
	}
	else if(op==3){
		printf("%.2f", cbrt(num1));
		printf("\n%.2f",cbrt(num2));
	}
	else{
		printf("opcao invalida");
	}
}
