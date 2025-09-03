#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(0));
    int numero, i=1, var;
    
    var = rand()%500 + 1;
    
    while(var!=numero)
    {
        printf("Digite um numero entre 0 e 500 \n");
        scanf("%d", &numero);
        if(numero==var)
            break;
        else if(numero<var)
            printf("Seu numero eh menor que o numero magico, tente novamente \n");
        else
            printf("Seu numero eh maior que o numero magico, tente novamente \n");
            
        i++;
    }
    
    if(i<=3)
        printf("|o/");
    else if(i>3 && i<=6)
        printf(":-D");
    else if(i>6 && i<=10)
        printf(":-)");
    else
        printf(":-|");
    
    return 0;
}