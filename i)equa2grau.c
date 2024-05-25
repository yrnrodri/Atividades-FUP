#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    float n1, n2, n3, delta, x1, x2;

    printf("Digite os coeficientes a, b e c, respectivamente: \n");
    scanf("%f %f %f", &n1,&n2,&n3);

    delta = ((n2 * n2) - (4 * n1 * n3));
    x1 = (- n2 + (sqrt(delta))) / (2 * n1);
    x2 = (- n2 - (sqrt(delta))) / (2 * n1);

    printf("As raizes x1 e x2 de sua equaçao sao, respectivamente: %f, %f\n", x1, x2);

    return 0;
}
//algoritmo
//declare a, b, c, delta, x1, x2 numerico
//escreva "Digite os coeficientes a, b, e c da equação respectivamente:"
//leia a, b, c
//delta <- (b * b) - (4 * a * c)
//x1 <- (- b + raiz_quadrada(delta)) / (2 * a)
//x2 <- (- b - raiz_quadrada(delta)) / (2 * a)
//se delta < 0
//entao escreva "As raízes não podem ser calculadas."
//senao
//escreva "As raízes x1 e x2, são, respectivamente = ", x1, x2
//fim_algoritmo
