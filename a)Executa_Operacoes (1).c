#include <stdio.h>
#include <math.h>

void main()
{
    float n1,n2,res;
    int opc;

    printf("\nDigite os dois numeros a serem processados: ");
    scanf("%f %f",&n1,&n2);

    printf("\nDigite a opcao de processamento desejada: ");
    scanf("%d",&opc);

    switch (opc)
    {

    case 1:

        res = (n1+n2)/2;
        printf("\nMedia de %f e %f = %f",n1,n2,res);
        break;

    case 2:

        if (n1 > n2)
                res = n1 - n2;
        else
            res = n2 - n1;

        printf("\nDiferenca entre o maior e o menor = %f",res);
        break;

    case 3:

        res = n1*n2;
        printf("\nProduto entre %f e %f = %f",n1,n2,res);
        break;


    case 4:

        if (n2 != 0)
        {

            res = n1/n2;
            printf("\nDivisao entre %f e %f = %f",n1,n2,res);

        }

        else

        {
            printf("Impossivel divisao por zero!");
        }

        break;

    default:
        printf("Opcao invalida!");


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
