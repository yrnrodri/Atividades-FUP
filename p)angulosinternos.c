#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Digite os valores dos lados do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Os valores dos lados formam um triangulo.\n");

        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        {
            printf("O triangulo é retangulo.\n");
            float angulo1 = atan(a/b) * 180 / 3.14; 
            float angulo2 = atan(b/a) * 180 / 3.14;
            float angulo3 = 90; 
            printf("Angulos internos: %.2f graus, %.2f graus, %.2f graus.\n", angulo1, angulo2, angulo3);
        }
    }    

    else
    {
        printf("Os valores dos lados nao formam um triangulo.\n");
    }

    return 0;
}

//algoritmo
//declare a, b, c, ang1, ang2, ang3 numerico
//escreva "Digite o valor dos lados do triangulo a, b e c, respectivamente:"
//leia a, b, c 
//se a < b + c e b < a + c e c < a + b
//entao inicio
//	escreva "Esses valores formam um triangulo."
//	se (a * a = b * b + c * c) ou (b * b = a * a + c * c) ou (c * c = a * a + b * b)
//	entao inicio
//		escreva "Triangulo retângulo."
//		ang1 <- ((ArcTan(a / b)) * 180) / 3.14
//		ang2 <- ((ArcTan(b / a)) * 180) / 3.14
//		ang3 <- 90
//	fim
//fim
//senao escreva "Esses valores não formam um triangulo."
//fim_algoritmo
