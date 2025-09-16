# include <stdio.h>

int main ()
{
    int n, m, i=1, j=1;

    printf("Digite o numero de linhas e colunas: \n");
    scanf("%d %d", &n, &m);

    while(i<=n)
    {
        while(j<=m)
        {
            printf("%d ", i*j);

            j++;
        }
        
        j=1;

        printf("\n");

        i++;
    }

    return 0;
}