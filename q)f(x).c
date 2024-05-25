#include <stdio.h>


int main()
{
    float x, fx;

    printf("Insira o valor de x: \n");
    scanf("%f", &x);

    if (x <= 1)
    {
        fx = 1 * x;
    }
    if (x > 1 && x <= 2)
    {
        fx = 2 * x;
    }
    if (x > 2 && x <= 3)
    {
        fx = x * x;
    }
    if (x > 3)
    {
        fx = x * x * x;
    }

    printf("O valor de f(x) �: %.2f\n", fx);
    return 0;
}
//algoritmo
//declare x, fx numerico
//escreva "Insira o valor de X:"
//leia x
//se x <= 1
//entao inicio
//	fx <- x * 1
//	escreva "O valor de f(x) é = ", fx
//fim
//se x > 1 e x <= 2
//entao inicio
//	fx <- x * 2
//	escreva "O valor de f(x) é = ", fx
//fim
//se x > 2 e x <= 3
//entao inicio
//	fx <- x * x
//	escreva "O valor de f(x) é = ", fx
//fim
//se x > 3
//entao inicio
//	fx <- x * x * x
//	escreva "O valor de f(x) é = ", fx
//fim
//fim_algoritmo
