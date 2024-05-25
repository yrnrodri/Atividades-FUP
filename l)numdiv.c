#include <stdio.h>


int main()
{
    int num_dividendo, num_divisor, resto;

    printf("Digite o numero que sera dividido: \n");
    scanf("%d", &num_dividendo);
    printf("Digite o numero que ira dividir: \n");
    scanf("%d", &num_divisor);

    resto = num_dividendo%num_divisor;

    if (resto == 0)
    {
        printf("Sim, %d eh divisivel por %d\n", num_dividendo, num_divisor);
    }
    else
    {
        printf("Nao divisivel.\n");
    }

    return 0;
}
//algoritmo
//declare num, num2, rest numerico
//escreva "Digite o numero que será dividido:"
//leia num
//escreva "Digite o número que irá dividir:"
//leia num2
//rest <- resto(num, num2)
//se rest = 0
//entao escreva "Sim, os dois sao divisiveis."
//senao escreva "Não divisivel."
//fim_algoritmo
