#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    if ((A + B > C) && (A + C > B) && (B + C > A)) {
        printf("Os valores informados podem formar um tri�ngulo.\n");
    } else {
        printf("Os valores informados N�O podem formar um tri�ngulo.\n");
    }

    return 0;
}
//algoritmo
//declare a, b, c numerico
//escreva "Digite o valor dos lados do triangulo a, b e c, //respectivamente:"
//leia a, b, c 
//se a < b + c e b < a + c e c < a + b
//entao escreva "Esses valores formam um triangulo."
//senao escreva "Esses valores não formam um triangulo."
//fim_algoritmo

