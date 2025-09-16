#include <stdio.h>

int main()
{
    int x, y;
    
    printf("Digite as coordenadas x ESPACO y: \n");
    scanf("%d %d", &x, &y);

    if(x>=0&&x<=432&&y>=0&&y<=468)
        printf("d");
    else
        printf("f");
    
    return 0;
}
