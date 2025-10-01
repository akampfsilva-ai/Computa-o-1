#include <stdio.h>

int bioun(int ano)
{
    if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
        return 1;
    else
        return 0;
}

int main ()
{
    int ano;

    printf("Digite o ano: \n");
    scanf(" %d \n", &ano);

    printf(" %d", bioun(ano));

    return 0;
}