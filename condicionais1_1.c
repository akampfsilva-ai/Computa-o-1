#include <stdio.h>

int main ()
{
    int alu;
    int prof;

    printf("Digite o numero de alunos: ");
    scanf("%d", &alu);
    printf("Digite o numero de professores: ");
    scanf("%d", &prof);

    if (alu + prof <= 50)
    {
        printf("Tudo pronto para a viagem!");
    }
    else
        printf("Nao eh possivel levar todos em uma viagem");

    return 0;
}
