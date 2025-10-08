#include <stdio.h>

int calculoDigitoVerificador (int num);

int main ()
{
    int num, x;

    printf("Digite um número: ");
    scanf("%d", &num);

    num=num%1000;

    printf("%d \n", num);

    x=calculoDigitoVerificador(num);

    printf("O digito verificador eh: %d \n", x);

    return 0;
}

int calculoDigitoVerificador (int num)
{
    int a, b, c;

    a=(num-(num%100))/100;

    b=(num%100-((num%100)%10))/10;

    c=(num%10);

    num=((a*1+b*2+c*3)%11)%10;

    printf("%d \n", num);

    return num;
}