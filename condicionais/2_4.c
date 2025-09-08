#include <stdio.h>

int main()
{
	float A, G, Ra, Rg;

	printf("Digite os valores de A [reais/litro], G [reais/litro], Ra [km/L] e Rg [km/L], nessa ordem \n");
	scanf("%f %f %f %f", &A, &G, &Ra, &Rg);

	if (A/Ra < G/Rg)
	{
		printf("A");
	}
	else
		printf("G");

	return 0;
}
