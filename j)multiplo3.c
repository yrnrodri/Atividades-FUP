#include <stdio.h>


int main()
{
    int num, resto;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    resto = num%3;

    if (resto == 0)
    {
        printf("Seu numero eh multiplo de 3.\n");
    }
    else
    {
        printf("Seu numero nao eh multiplo de 3.\n");
    }

    return 0;
}
//algoritmo
//declare num, rest numerico
//escreva "Digite um numero:"
//leia num
//rest <- resto(num, 3)
//se rest = 0
//entao escreva "Seu número é multiplo de 3."
//senao escreva "Seu número não é multiplo de 3."
//fim_algoritmo