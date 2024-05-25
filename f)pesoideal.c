#include <stdio.h>


int main()
{

    char sexo;
    float altura, peso_ideal;
    
    printf("Digite seu sexo (M ou F): \n");
    scanf("%s", &sexo);
    printf("Digite sua altura: \n");
    scanf("%f", &altura);


    if(sexo == 'M')
    {
            peso_ideal = (72 * altura) - 58;
            printf("Seu peso ideal é: %.2f\n", peso_ideal);
    }

     if(sexo == 'F')
    {
            peso_ideal = (62.1 * altura) - 44.7;
            printf("Seu peso ideal: %.2f\n", peso_ideal);
    }

    return 0;

}
//algoritmo
//declare altura, peso_ideal numerico sexo literal
//escreva "Digite sua altura:"
//leia altura
//escreva "Digite seu sexo, (M) para mulher e (H) para homem:"
//leia sexo
//se sexo = "H"
//entao inicio
//	peso_ideal <- (72.7 * altura) - 58
//	escreva "Seu peso ideal é : ", peso_ideal
//fim
//se sexo = "M"
//entao inicio
//	peso_ideal <- (62.1 * altura) - 44.7
//	escreva "Seu peso ideal é : ", peso_ideal
//fim
//fim_algoritmo
