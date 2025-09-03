#include <stdio.h>

int main()
{
    int n, i=0;
    float n1, n2, n3;
    
    printf("Digite quantos testes voce gostaria de fazer\n");
    scanf("%d", &n);
    
    while(i<n)
    {
        printf("Digite quais valores voce quer ponderar, poderes de 2, 3 e 5, nessa ordem (com espaco) \n");
        scanf("%f %f %f", &n1,&n2,&n3);
        printf("Esta media ponderada equivale a %f \n", (n1*2+n2*3+n3*5)/10);
        
        i++;
    }
    
    printf("Fim do programa \n");
    
    return 0;
}