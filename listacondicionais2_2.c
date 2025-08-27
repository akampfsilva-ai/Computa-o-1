#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2, n3;
    char opcao;
    
    printf("Escolha entre: A, para media aritmetica; P, media ponderada; G, para media geometria; ou H, para media harmonica \n");
    scanf(" %c", &opcao);
    
    if (opcao == 'p' || opcao == 'P')
    {
        printf("Agora, digite tres valores considerando a ordem de pesos 1, 2 e 3, separando-os com ESPACO \n");
        scanf("%f %f %f", &n1, &n2, &n3);
        printf("O valor da media ponderada eh %.2f", ((n1 + 2*n2 + 3*n3)/6));
    }
    else
    {
        printf("Agora, digite tres valores, separando-os com ESPACO \n");
        scanf("%f %f %f", &n1, &n2, &n3);
        
        if (opcao == 'a' || opcao == 'A')
            printf("O valor da media aritmetica eh %.2f", (n1 + n2 + n3)/3);
        else if (opcao == 'g' || opcao == 'G')
            printf("O valor da media geometrica eh %.2f", pow((n1*n2*n3),(1.0/3)));
        else
            printf("O valor da media harmonica eh %.2f", 3/((1.0/n1)+(1.0/n2)+(1.0/n3)));
    }
    
    return 0;
}