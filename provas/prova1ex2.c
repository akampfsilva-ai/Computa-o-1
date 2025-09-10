#include <stdio.h>

int main ()
{
    int i, frutas;
    float soma, preco, media, chute;
    
    printf("Quantas frutas voce comprou? \n");
    scanf(" %d", &frutas);
    
    soma=0;
    
    for(i=1;i<=frutas;i++)
    {
        printf("Qual eh o preço da fruta n%d \n", i);
        scanf(" %f", &preco);
        
        soma+=preco;
    }
    
    media=soma/(i-1);
    
    printf("Adivinhe a media dos valores \n");
    scanf(" %f", &chute);
    
    if(chute>0)
    {
        while(chute!=media)
        {
            if(chute<media)
            {
                printf("A media eh maior, tente novamente \n");
                scanf(" %f", &chute);
            }
            else
            {
                printf("A media eh menor, tente novamente \n");
                scanf(" %f", &chute);
            }
        }
        
        printf("Voce acertou! A media eh %f", chute);
    }
    else
        printf(":(");
    
    return 0;
}
