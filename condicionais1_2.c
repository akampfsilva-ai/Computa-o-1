#include <stdio.h>

int main ()
{
    float base;
    float alt;
    float per;
    float are;

    printf("Insira o valor da base em metros: ");
    scanf("%f", &base);
    printf("Agora, insira o valor da altura em metros: ");
    scanf("%f", &alt);

    per = 2*base + 2*alt;

    are = base*alt;

    printf("O perimetro em metros eh %.2f e a area em metros quadrados eh %.2f. \n", per, are);

    if (per>are)
    {
        printf("O valor do perimetro é maior que a area.");
    }
    else
        printf("O valor da area eh igual ou maior que o perimetro.");

    return 0;
}
