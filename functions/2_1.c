#include <stdio.h>

void questao01 (int *a, int *b)
{
    (*a)++;
    (*b)--;
}

int main()
{
    int a, b;

    printf("Digite dois valores inteiros: ");
    scanf("%d", &a);
    scanf("%d", &b);

    questao01(&a,&b);

    printf("Os novos valores sao: %d %d \n", a, b);

    return 0;
}