#include <stdio.h>


int main()
{
    int a, b, c;

    printf("Digite os valores de a, b e c de um triangulo, respectivamente: \n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if (a != b && a != c && b != c)
        {
            printf("Seu triangulo eh escaleno.\n");
        }
        else if (a == b && a == c && b == c)
        {
            printf("Seu triangulo eh equilatero.\n");
        }
        else
        {
            printf("Seu triangulo eh isosceles.\n");
        }
    }
    else
    {
        printf("Os valores informados nao podem formar um triangulo");
    }

    return 0;
}
//algoritmo
//declare a, b, c numerico
//escreva "Digite o valor dos lados do triangulo a, b e c, //respectivamente:"
//leia a, b, c 
//se a < b + c e b < a + c e c < a + b
//entao inicio
//	escreva "Esses valores formam um triangulo."
//	se a = b e a = c 
//	entao escreva "Triangulo equilátero."
//	se a <> b e a <> c e b <> c
//	entao escreva "Triangulo escaleno."
//	se (a = b e a <> c) ou (b = c e b <> a) ou (c = a e c <> b)
//	entao escreva "Triangulo isosceles."
//fim
//senao escreva "Esses valores não formam um triangulo."
//fim_algoritmo
