#include <stdio.h>


int main(){

    float preco, novo_preco, per1, per2, per3;

    printf("Digite o preço: \n");
    scanf("%f", &preco);

    per1 = preco * 0.05;
    per2 = preco * 0.1;
    per3 = preco * 0.15;

    if(preco <= 50)
    {
        novo_preco = preco + per1;
        printf("O novo preco é: %.1f\n", novo_preco);
    }
    
    if(preco > 50 && preco <= 100)
    {
        novo_preco = preco + per2;
        printf("O novo preco é: %.1f\n", novo_preco);

    }

    if (preco > 100)
    {
        novo_preco = preco + per3;
        printf("O novo preco é: %.1f\n", novo_preco);
        
    }
    
    if(novo_preco <= 80)
    {
        printf("Classificação D.\n");
    }

    if(novo_preco > 80 && novo_preco <= 120)
    {
        printf("Classificação C.\n");
    }

    if(novo_preco > 120 && novo_preco <= 200)
    {
        printf("Classificação B.\n");
    }

    if(novo_preco > 200)
    {
        printf("Classificação A");
    }

    return 0;

}
//algoritmo
//declare preco, novo_preco, percent numerico
//escreva "Insira  o preço do produto:"
//leia preco
//se preco <= 50
//entao inicio
//	percent <- preco * 0.05
//	novo_preco <- preco + percent
//fim
//se preco > 50 e preco <=100
//entao inicio
//	percent <- preco * 0.1
//	novo_preco <- preco + percent
//fim
//se preco > 100 
//entao inicio
//	percent <- preco * 0.15
//	novo_preco <- preco + percent
//fim
//se novo_preco < 80
//entao inicio
//	escreva "Seu novo preço é : ", novo_preco
//	escreva "Sua classificação é D"
//fim
//se novo_preco >= 80 e novo_preco <= 120
//entao inicio
//	escreva "Seu novo preço é : ", novo_preco
//	escreva "Sua classificação é C"
//fim
//se novo_preco > 120 e novo_preco <= 200
//entao inicio
//	escreva "Seu novo preço é : ", novo_preco
//	escreva "Sua classificação é B"
//fim
//se novo_preco > 200
//entao inicio
//	escreva "Seu novo preço é : ", novo_preco
//	escreva "Sua classificação é A"
//fim
//fim_algoritmo