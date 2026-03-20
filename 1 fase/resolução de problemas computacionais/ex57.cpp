/* Cada degrau de uma escada tem X de altura. Elabore um algoritmo que receba essa altura, e uma
altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário
deverá subir para atingir seu objetivo, sem se preocupar com a altura do usuário. */
  
#include<stdio.h>
main()
{
	float altura, alcancar;
	printf("digite a altura do degrau: ");
	scanf("%f",&altura);
	printf("digite a altura que vc deseja alcancar: ");
	scanf("%f",&alcancar);
	
	printf("degraus a subir: %.2f", (alcancar - altura)/altura);
}
