#include <stdio.h>

int arredonda (float x);

int main ()
{
    float x;

    printf("Digite um valor: \n");
    scanf(" %d \n", &x);

    arredonda(x);

    printf(" %d", arredonda(x));

    return 0;
}

int arredonda (float x)
{
    if (x % 1 >= -0.5 && x % 1 <= 0.5)
        x=x-(x%1);
    else
        x=x+(1-(x%1));

    return x;
}