//Faça um programa que receba o peso de uma pessoa, calcule e mostre: 1.
//a. o novo peso, se a pessoa engordar 15% sobre o peso digitado; 2.
//b. o novo peso, se a pessoa emagrecer 20% sobre o peso digitado;
#include<stdio.h>
main()
{
    float peso, engorda, emagrece;
    printf("digite o seu peso: ");
    scanf("%f", &peso);  //%f pq é float
    emagrece = peso*0.8;
    engorda = peso*1.15;
    printf("se voce engordar 15%% ficara com: %.2f", engorda);
    printf("\nse vc emagrecer 20%% ficara com: %.2f", emagrece);
}
