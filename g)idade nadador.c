#include <stdio.h>


int main()
{

int idade;

printf("Digite sua idade.\n");
scanf("%d", &idade);

if (idade < 5)
{
    printf("Erro.\n");
}

if (idade >= 5 && idade <= 7)
{

    printf("Sua categoria é: infantil.\n");

}

if (idade >= 8 && idade <= 10)
{
    printf("Sua categoria é: infanto-juvenil.\n");
}

if (idade >= 11 && idade <= 15)
{
    printf("Sua categoria é: juvenil.\n");
}

if (idade >= 16 && idade <= 30)
{
    printf("Sua categoria é: adulto.\n");
}

if (idade > 30)
{
    printf("Sua categoria é: master.\n");
}

return 0;

}
//algoritmo
//declare idade numerico
//escreva "Digite sua idade"
//leia idade
//se idade >= 5 e idade <= 7
//entao inicio
//	escreva "Sua categoria é infantil"
//fim
//se idade >= 8 e idade <= 10
//entao inicio
//	escreva "Sua categoria é infanto-juvenil"
//fim
//se idade >= 11 e idade <= 15
//entao inicio
//	escreva "Sua categoria é juvenil"
//fim
//se idade >= 16 e idade <= 30
//entao inicio
//	escreva "Sua categoria é adulto"
//fim
//se idade > 30
//entao inicio
//	escreva "Sua categoria é master"
//fim
//fim_algoritmo
