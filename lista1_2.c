#include <stdio.h>

int main()
{
    float n1, n2, aux;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    aux = n1 + n2;

    printf("A soma de %.2f e %.2f eh %.2f", n1, n2, aux);

    return 0;
}
