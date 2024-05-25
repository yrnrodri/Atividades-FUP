#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        printf("Os valores podem formar um tri�ngulo.\n");

        if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        {
            printf("O tri�ngulo � ret�ngulo.\n");
        }
        else if (a*a > b*b + c*c || b*b > a*a + c*c || c*c > a*a + b*b)
        {
            printf("O tri�ngulo � obtus�ngulo.\n");
        }
        else
        {
            printf("O tri�ngulo � acut�ngulo.\n");
        }
    }
    else
    {
        printf("Os valores n�o podem formar um tri�ngulo.\n");
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
//	se (a * a = b * b + c * c) ou (b * b = a * a + c * c) ou (c * c = a * a + b * b)
//	entao escreva "Triangulo retângulo."
//	se (a * a > b * b + c * c) ou (b * b > a * a + c * c) ou (c * c > a * a + b * b)
//	entao escreva "Triangulo obtusângulo."
//	se (a * a + b * b > c * c e a * a + c * c > b * b e b * b + c * c > a * a e seno(a) < 1 e seno(b) < 1 e seno(c) < 1)
//	entao escreva "Triangulo acutângulo."
//fim
//senao escreva "Esses valores não formam um triangulo."
//fim_algoritmo
