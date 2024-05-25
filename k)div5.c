#include <stdio.h>


int main()
{
    int num, resto;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    resto = num%5;

    if (resto == 0)
    {
        printf("Seu numero eh divisivel por 5.\n");
    }
    else
    {
        printf("Seu numero nao eh divisivel por 5.\n");
    }

    return 0;
}
//algoritmo
//declare num, rest numerico
//escreva "Digite um numero:"
//leia num
//rest <- resto(num, 5)
//se rest = 0
//entao escreva "Seu número é divisivel por 5."
//senao escreva "Seu número não é divisivel por 5."
//fim_algoritmo