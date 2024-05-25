#include <stdio.h>


int main()
{

    float peso;
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    if (idade < 20)
    {
        if (peso < 60)
        {
            printf("Seu grupo de risco é o 9.\n");
        }
        else if (peso >= 60 && peso <= 90)
        {
            printf("Seu grupo de risco é o 8.\n");
        }
        else
        {
            printf("Seu grupo de risco é o 7.\n");
        }
    }

    if (idade >= 20 && idade <= 50)
    {
        if (peso < 60)
        {
            printf("Seu grupo de risco é o 6.\n");
        }
        else if (peso >= 60 && peso <= 90)
        {
            printf("Seu grupo de risco é o 5.\n");
        }
        else
        {
            printf("Seu grupo de risco é o 4.\n");
        }
    }

    if (idade > 50)
    {
        if (peso < 60)
        {
            printf("Seu grupo de risco é o 3.\n");
        }
        else if (peso >= 60 && peso <= 90)
        {
            printf("Seu grupo de risco é o 2.\n");
        }
        else
        {
            printf("Seu grupo de risco é o 1.\n");
        }
    }


    return 0;

}
//algoritmo
//declare idade, peso numerico
//escreva "Digite sua idade:"
//leia idade
//escreva "Digite seu peso:"
//leia peso
//se idade < 20
//entao inicio
//	se peso <= 60
//	entao inicio
//		escreva "Seu grupo de risco é o 9."
//	fim
//	se peso > 60 e peso <= 90
//	entao inicio
//		escreva "Seu grupo de risco é o 8."
//	fim
//	se peso > 90
//	entao inicio
//		escreva "Seu grupo de risco é o 7."
//	fim
//		
//	
//fim
//se idade >= 20 e idade <= 50
//entao inicio
//	se peso <= 60
//	entao inicio
//		escreva "Seu grupo de risco é o 6."
//	fim
//	se peso > 60 e peso <= 90
//	entao inicio
//		escreva "Seu grupo de risco é o 5."
//	fim
//	se peso > 90
//	entao inicio
//		escreva "Seu grupo de risco é o 4."
//	fim
//fim
//se idade > 50
//entao inicio
//	se peso <= 60
//	entao inicio
//		escreva "Seu grupo de risco é o 3."
//	fim
//	se peso > 60 e peso <= 90
//	entao inicio
//		escreva "Seu grupo de risco é o 2."
//	fim
//	se peso > 90
//	entao inicio
//		escreva "Seu grupo de risco é o 1."
//	fim
//fim
//fim_algoritmo