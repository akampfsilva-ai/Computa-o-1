#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define JAJA 49

int main ()
{
    int i, j, k, l, m, n, v;
    char* matriz [3][3], str[JAJA];

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Digite a sua string do espaco [%d][%d]:\n", i, j);

            fgets(str, JAJA, stdin);

            if(str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u')
            {
                while(str[k] != '\0')
                {
                    v=k;
                }

                for(l=0;l<v/2;l++)
                {
                    for(m=0;m<v;m++)
                    {
                        if(l+m==v-1)
                        {
                            n = str[l];
                            str[l] = str[m];
                            str[m] = n;
                        }
                    }
                }
            }
            matriz[i][j]=str;
            printf("%s", matriz[i][j]);
        }
    }

    return 0;
}