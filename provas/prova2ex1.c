#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define JAJA 51

void retornaString (char str[])
{
    int l, m;
    int v = strlen(str);
    char n;

    if (strchr("aeiouAEIOU", str[0]))
        {
            for (l=0, m=v-1; l<m; l++, m--)
                {
                    n = str[l];
                    str[l] = str[m];
                    str[m] = n;
                }
        }
}

int main ()
{
    int i, j;
    char matriz [3][3][JAJA];

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
          printf("Digite a string [%d][%d]", i, j);

          fgets(matriz[i][j], JAJA, stdin);

          matriz[i][j][strcspn(matriz[i][j], "\n")] = '\0';

          retornaString(matriz[i][j]);
        }
    }

    printf("Matriz final:\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            printf("%s ", matriz[i][j]);

        printf("\n");
    }

    return 0;
}