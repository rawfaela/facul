//Elabore um algoritmo que imprima a tabuada de 1 a 10.

#include<stdio.h>
main()
{
	for (int x = 1; x<= 10; x++){
		for (int i = 1; i <= 10; i++)
		{
			printf("\n%i x %i = %i",x,i,(x*i));
		}
		printf("\n");	
	}	
}
