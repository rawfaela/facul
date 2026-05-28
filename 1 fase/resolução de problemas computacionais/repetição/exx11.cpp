/* Elabore um algoritmo que receba os dados de vários funcionários. Os dados a serem informados são:
  • O valor do salário mínimo;
  • O número de horas trabalhadas;
  • O número de dependentes de cada funcionário;
  • Quantidade de horas extras trabalhadas.
  Obs: Quando –1 for digitado para horas trabalhadas, a entrada de dados é finalizada.
Ao final de cada leitura, calcule e imprima o salário a receber de cada funcionário, tendo em vista as regras a seguir:
  a. O valor da hora trabalhada é igual a 1/10 do salário mínimo;
  b. O salário do mês é igual ao número de horas trabalhadas, multiplicado pelo valor da hora trabalhada;
  c. Para cada dependente, é feito um acréscimo de R$ 32 reais;
  d. Para cada hora extra trabalhada, é feito um acréscimo de 50% ao valor da hora trabalhada;
  e. O salário bruto é igual ao salário do mês, mais os valores dos dependentes, e mais valores das horas extras;
  f. O desconto do Imposto de Renda retido na fonte segue a tabela a seguir:
      IRRF               Salário Bruto
      Isento              Até 900,00
      10%       Acima de 900,00 até 1500,00
      20%             Superior a 1500,00
  g. O salário líquido é igual ao salário bruto menos o IRRF;
  h. A gratificação segue a tabela a seguir:
      Salário Líquido       Bonificação
      Até 900,00             R$ 100,00
      Superior a 900,00      R$ 50,00 
  i. O salário a receber do funcionário é igual ao salário líquido mais a gratificação.  */
  
#include<stdio.h>
main()
{
	float salmin = 0, numhoras = 0, hrsextra = 0, salreceber = 0, vlrhora = 0, salbruto = 0, salliq = 0;
	int numdep = 0;
	
	printf("digite o valor do salario minimo: ");
	scanf("%f",&salmin);
	printf("digite o numero de horas trabalhadas: ");
	scanf("%f",&numhoras);
	
	while (numhoras != -1)
	{
		printf("digite o numero de dependentes: ");
		scanf("%i",&numdep);
		printf("digite a qtd de horas extras trabalhadas: ");
		scanf("%f",&hrsextra);
		
		vlrhora = salmin/10;
		salbruto = (numhoras * vlrhora) + (32 * numdep) + (1.5 * vlrhora * hrsextra);
		
		if (salbruto <= 900)
		{
			salliq = salbruto;
		}
		else if (salbruto <= 1500)
		{
			salliq = salbruto * 0.9;
		}
		else 
		{
			salliq = salbruto * 0.8;
		}
		
		if (salliq <= 900)
		{
			salreceber = salliq + 100;
		}
		else 
		{
			salreceber = salliq + 50;
		}
		
		printf("O salario a receber do funcionario e de: %.2f \n",salreceber);
		
		printf("digite o numero de horas trabalhadas: ");
		scanf("%f",&numhoras);
	}
}
