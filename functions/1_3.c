#include <stdio.h>

int calculoDigitoVerificador (int num);

int main ()
{
    int num, x;

    printf("Digite um número: \n");
    scanf(" %d \n", &num);

    x=calculoDigitoVerificador(num%1000);

    printf("%d \n", x);

    return 0;
}

int calculoDigitoVerificador (int num)
{
    num=(((num-(num%100))*1+(num%100-((num%100)%10))*2+(num%10)*3)%11)%10;

    return num;
}