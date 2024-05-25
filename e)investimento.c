#include <stdio.h>


int main()
{

    float valor, per1, per2, valor_corrigido;
    int tipo;

    printf("Digite o valor do seu investimento: \n");
    scanf("%f", &valor);
    printf("Escolha o tipo de investimento: \n");
    scanf("%d", &tipo);

    per1 = valor * 0.1;
    per2 = valor * 0.15;

    switch(tipo)
    {
        case 1:
        valor_corrigido = valor + per1;
        printf("Seu valor corrigido é: %.2f\n", valor_corrigido);
        break;

        case 2:
        valor_corrigido = valor + per2;
        printf("Seu valor corrigido é: %.2f\n", valor_corrigido);
        break;

        default:
        printf("Opção inválida!");

    }

    return 0;
   
}
//algoritmo
//declare opc, valor_investimento, valor_corrigido, percent numerico
//escreva "Digite o valor do investimento"
//leia valor_investimento
//escreva "Digite a opção desejada"
//leia opc
//se opc = 1
//entao inicio
//	percent <- valor_investimento * 0.1
//	valor_corrigido <- valor_investimento + percent
//	escreva "Seu valor corrigido é : ", valor_corrigido
//fim
//se opc = 2
//entao inicio
//	percent <- valor_investimento * 0.15
//	valor_corrigido <- valor_investimento + percent
//	escreva "Seu valor corrigido é : ", valor_corrigido
//fim
//fim_algoritmo
