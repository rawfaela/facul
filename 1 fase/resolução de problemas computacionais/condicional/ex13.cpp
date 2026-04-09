/* O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a seguir. Faça um algoritmo que receba o custo de fábrica de um carro e mostre o preço ao consumidor.
Custo de Fábrica                   % do distribuidor     % dos impostos
Até R$ 15.000,00                         5                 isento
Até R$ 15.000,00 e até R$ 25.000,00     10                   15
Acima de R$ 25.000,00                   15                   20 */

#include<studio.h>
main()
{
	float custo;
	printf("Digite o custo de fabrica: ");
	scanf("%f", &custo);
	
	if(custo<=15000){
		printf("Preco ao consumidor: %.2f", (custo*1.05));
	} else if(custo<=25000) {
		printf("Preco ao consumidor: %.2f", (custo*1.25));
	} else {
		printf("Preco ao consumidor: %.2f", (custo*1.35));
	}
}
