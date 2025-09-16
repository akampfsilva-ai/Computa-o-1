#include <stdio.h>

int main()
{
    float x, y;

    printf("Digite as coordenadas de x e y ");
    scanf(" %f", &x);
    scanf(" %f", &y);

    if (x>0&&y>0)
        printf("Q1");
    else if (x<0&&y>0)
        printf("Q2");
    else if (x<0&&y<0)
        printf("Q3");
    else if (x>0&&y<0)
        printf("Q4");
    else if (x!=0&&y==0)
        printf("Eixo x");
    else if (x==0&&y!=0)
        printf("Eixo y");
    else
        printf("Origem");
    
    return 0;
}
