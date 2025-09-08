#include <stdio.h>
#include <math.h>

int main ()
{
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    printf("Digite o valor de 'a': ");
    scanf("%f", &a);
    printf("Digite o valor de 'b': ");
    scanf("%f", &b);
    printf("Digite o valor de 'c': ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;

    x1 = ((-1)*b + sqrt(delta))/2*a;

    x2 = ((-1)*b - sqrt(delta))/2*a;

    if (delta>0)
    {
       printf("As raizes sao %f e %f. \n", x1, x2);
    }
    else

    return 0;
}
