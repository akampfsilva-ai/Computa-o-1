# include <stdio.h>

int main ()
{
    int n, i=0, f1=1, f2=1, f3=1;

    printf("Digite quantos numeros da sequencia de fibonacci voce deseja: \n");
    scanf(" %d", &n);

    while(i<n)
    {
        if(i==0||i==1)
        {
            printf("%d \n", i);

            i++;
        }
        else
        {
            printf("%d \n", f1);
            f1+=f2;
            f2=f3;
            f3=f1;

            i++;
        }
    }

    return 0;
}
