#include<stdio.h>
main()
{
    float peso, engorda, emagrece;
    printf("digite o seu peso: ");
    scanf("%f", &peso);
    emagrece = peso*0.8;
    engorda = peso*1.15;
    printf("se voce engordar 15%% ficara com: %.2f", engorda);
    printf("\nse vc emagrecer 20%% ficara com: %.2f", emagrece);
}
