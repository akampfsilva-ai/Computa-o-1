#include <stdio.h>
#include <math.h>

int main ()
{
    int numero, g=1, i, var;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    for(i=11;i<numero;i+=pow(10,g))
    {
        g++;
        var=i;
    }
    
    if(numero<10)
        printf("Os digitos sao iguais entre si");
    else if(numero%var==0)
        printf("Os digitos sao iguais entre si");
    else
        printf("Os digitos sao diferentes entre si");
        
    return 0;
}
