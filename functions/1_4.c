#include <stdio.h>

int retornaMaiorValor (int n1, int n2)
{
    if (n1>n2)
        return n1;
    else if (n1<n2)
        return n2;
    else
        return n1;
}

int main()
{
    int n1, n2;

    printf("Digite dois valores inteiros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("O maior valor eh: %d \n", retornaMaiorValor(n1,n2));

    return 0;
}