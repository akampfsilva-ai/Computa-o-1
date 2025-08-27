#include <stdio.h>
#include <math.h>

int main ()
{
    float ladoA, ladoB, ladoC;
    
    printf("Considere um triangulo com lados A, B e C. Insira os valores dos lados nessa ordem, separando-os por ESPACO \n");
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);
    
    if (ladoA <= ladoB + ladoC && ladoB <= ladoA + ladoC && ladoC <= ladoA + ladoB)
    {
        if (ladoA != ladoB && ladoA != ladoC && ladoB != ladoC)
            printf("O seu triangulo ABC eh escaleno");
        else if (ladoA == ladoB && ladoA == ladoC && ladoB == ladoC)
            printf("O seu triangulo ABC eh equilatero");
        else
            printf("O seu triangulo ABC eh isosceles");
    }
    else
        printf("O seu triangulo nao existe");
    
    return 0;
}