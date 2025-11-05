#include <stdio.>

#define file_path "numeros.txt"

void calculaMedia (int v[], int a)
{
    int total;

    for(int i=0; i<=a; i++)
    {
        printf("O espaco de v[%d] tem valor: %d\n", i, v[i]);
        total+=v[i];
    }

    return (total/10);
}

int main ()
{
    FILE* arquivo;
    int i, num, v[10];

    fopen(file_path, "w")
    if(arquivo == NULL)
        return 1;

    for(i=0; i<10; i++)
    {
        printf("Digite o numero inteiro\n");
        scanf("%d", &num);

        fprintf(arquivo, "%d\n", num);
    }

    fclose(arquivo);

    fopen(file_path, "r")
    if(arquivo == NULL)
        return 1;

    while(fscanf(arquivo, "%d", &num) != EOF)
    {
        i=0;

        printf("Leu %d", num);
        
        v[i] = num;

        i++;
    }

    fclose(arquivo);

    printf("A media ficou igual a: %d\n", calculaMedia(v, i));

    return 0;
}