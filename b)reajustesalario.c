#include <stdio.h>

int main()
{

    float sal_funcionario, aumento, sal_reajustad;

    printf("Digite seu salario: \n");
    scanf("%f", &sal_funcionario);

    aumento = sal_funcionario * 0.3;

    if (sal_funcionario < 900)
    {
        sal_reajustad = sal_funcionario + aumento;

        printf("Seu novo salario é: %f\n", sal_reajustad);


    }

    else {

        printf("Não receberá aumento.\n");
    }

    return 0;
    
}
//algoritmo
//declare sal_funcionario, sal_reajustado, percent numerico
//escreva "Digite seu salário:"
//leia sal_funcionario
//percent <- sal_funcionario * 0.3
//se sal_funcionario < 900
//entao inicio
//	sal_reajustado <- sal_funcionario + percent
//	escreva "Seu novo salário é : ", sal_reajustado
//fim
//senao inicio
//	escreva "Sem reajuste de salário"
//fim
//fim_algoritmo
