/* Elabore um algoritmo que mostre o menu de opções a seguir, receba a opção do usuário e
os dados necessários para executar cada operação.
Menu de Opções
a. Arredondamento para baixo
b. Arredondamento para cima
c. Logaritmo natural
d. Logaritmo de base 10
e. Valor absoluto
f. Parte inteira
g. Parte decimal
h. Quadrado
i. Raiz quadrada
Digite a opção desejada: ____ */

#include<stdio.h>
#include<math.h>

int main()
{
	char op;
	float num;
	
	printf("MENU DE OPCOES \n a: arredondamento para baixo \n b: arredondamento para cima \n c: logaritmo natural \n d: logaritmo de base 10 \n e: valor absoluto \n f: parte inteira \n g: parte decimal \n h: quadrado \n i: raiz quadrada \n Digite a opcao desejada: ");
	scanf("%c", &op);
	
	printf("digite o numero para realizar a operacao: ");
	scanf("%f", &num);
	switch(op)
	{
		case 'a':
			printf("%.2f", floor(num));
		break;
		case 'b':
			printf("%.2f", ceil(num));
		break;
		case 'c':
			printf("%.2f", log(num));
		break;
		case 'd':
			printf("%.2f", log10(num));
		break;
		case 'e':
			printf("%.2f", fabs(num));
		break;
		case 'f':
			printf("%.2f", floor(num));
		break;
		case 'g':
			printf("%.2f", num - floor(num));
		break;
		case 'h':
			printf("%.2f", sqrt(num));
		break;
		case 'i':
			printf("%.2f", pow(num,2));
		break;
		default:
			printf("opcao invalida");
	}
}
