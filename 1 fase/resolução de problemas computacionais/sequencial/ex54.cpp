/* Elabore um algoritmo que receba uma hora (utilize uma variável para hora e outra para minutos),
calcule e mostre:
a. A hora digitada convertida em minutos
b. O total dos minutos, ou seja, os minutos informados mais a conversão anterior
c. O total dos minutos convertidos em segundos */
//nao ta pronto
#include<stdio.h>
main() 
{
	int hora, min, horamin, mintot;
	printf("digite a hora: ");
	scanf("%i",&hora);
	printf("digite o minuto: ");
	scanf("%i",&min);
	
	horamin = hora/60;
	mintot = horamin + min;
	printf("hora em minutos: %i, total dos minutos: %i",horamin,mintot,(mintot/60));
}
