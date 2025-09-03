#include <stdio.h>
#include <math.h>

int main ()
{
    int a, i=11, g=1;
    
    printf("Digite um valor qualer \n");
    scanf("%d", &a);
    
    if(a%10!=0 && a>10)
    {
        for(i=11;a%i!=0;i+=pow(10,g))
        {
            g++;
        }
        if(a%i==0)
            printf("Os digitos do seu numero sao todos iguais");
        else
            printf("Os digitos de seu numero sao diferentes");
    }
    else
        printf("Os digitos de seu numero sao diferentes");
        
    return 0;
}