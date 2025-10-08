#include <stdio.h>

int arredonda (float x);

int main ()
{
    float x;

    printf("Digite um valor: \n");
    scanf(" %f", &x);

    arredonda(x);

    printf("%d \n", arredonda(x));

    return 0;
}

int arredonda (float x)
{
    if (x>=0){
        if (x - (int)x >= 0.5)
            x = x + (1-(x-(int)x));
        else
            x = x - (x - (int)x);}
    else
    {
        x=(-1)*x;

        if (x - (int)x >= 0.5)
            x = x + (1-(x-(int)x));
        else
            x = x - (x - (int)x);
        
        x=(-1)*x;
    }

    return x;
}