# include <stdio.h>

int main ()
{
    int valor, valor1=1;

    printf("Digite um valor igual ou maior que zero: \n");
    scanf("%d", &valor);

    while(valor>=0)
    {
        printf("Digite novo valor: \n");

        scanf("%d", &valor);

        if(valor>valor1)
            valor1=valor;
        else
            continue;
    }

    printf("O maior valor digitado foi %d", valor1);

    return 0;
}