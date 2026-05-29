/* Faça um programa que apresente o menu de opções a seguir, permita ao usuário escolher a opção desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade de opção inválida e não se preocupe com restrições do tipo salário inválido.
Menu de opções:
1. Imposto
2. Novo salário
3. Classificação
4. Finalizar o programa
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto usando as regras a seguir.
       Salário        % do Imposto
    Menor que R$500       5
    De R$500 a R$850      10   
    Acima de R$850        15
Na opção 2: receber o salário de um funcionário, calcular e mostrar o novo valor do salário usando as regras a seguir.
        Salário                   Aumento
    Maior que R$1500                R$25
    De R$750 (incluso) a R$1500     R$50
    De R$450 a R$750                R$75
    Menor que R$450                 R$100
Na opção 3: receber o salário de um funcionário, calcular e mostrar a classificação usando as regras a seguir. 
      Salário            Classificação
    Até R$700            Mal remunerado
    Maior que R$700      Bem remunerado */
  
#include<stdio.h>
#include <math.h>

main()
{
	int op;
	float sal;
	
	while (1)
	{
		printf("\n\n1-Imposto\n2-Novo salario\n3-Classificacao\n4-Finalizar programa\nDigite a opcao desejada: ");
		scanf("%i",&op);
		
		switch(op)
		{
			case 1:
				printf("Digite o salario do func: ");
				scanf("%f",&sal);	
				if (sal < 500)
				{
					printf("O valor do imposto e: %.2f",sal*0.05);
				}
				else if(sal <= 850)
				{
					printf("O valor do imposto e: %.2f",sal*0.1);
				}
				else 
				{
					printf("O valor do imposto e: %.2f",sal*0.15);					
				}
			break;
			
			case 2:
				printf("Digite o salario do func: ");
				scanf("%f",&sal);
				if (sal < 450)
				{
					printf("O novo salario e: %.2f", sal + 100);
				}
				else if(sal < 750)
				{
					printf("O novo salario e: %.2f", sal + 75);					
				}
				else if(sal < 1500)
				{
					printf("O novo salario e: %.2f", sal + 50);					
				}
				else 
				{
					printf("O novo salario e: %.2f", sal + 25);					
				}
			break;
			
			case 3:
				printf("Digite o salario do func: ");
				scanf("%f",&sal);
				if(sal <= 700)
				{
					printf("Mal remunerado");
				}
				else
				{
					printf("Bem remunerado");
				}
			break;
			
			case 4:
				printf("Saindo...");
			break;
			
			default: 
				printf("Opcao invalida.");
			continue;
		}	
		if (op == 4)
			break;	
	}	
}
