#include <stdio.h>

#define JAJA 49

int main ()
{
    int i, j, m, n;
    char* matriz [3][3], str[JAJA];

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Digite a sua string do espaco [%d][%d]:\n", i, j);
            if(fgets(str, JAJA, stdin)&&(str[1]==('a'||'e'||'i'||'o'||'u')))
            {
                for()
            }
            matriz[i][j]=fgets(str, JAJA, stdin);
            printf("%s", matriz[i][j]);
        }
    }
}