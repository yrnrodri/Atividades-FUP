#include <stdio.h>
#include <math.h>

int main(){

    float saldo_med, percent1, percent2, percent3, percent4, valor_cred;

    printf("Digite seu saldo medio: \n");
    scanf("%f", &saldo_med);


    if (saldo_med > 400){ 
        percent1 = saldo_med * 0.3;
        valor_cred = saldo_med + percent1;

        printf("Seu valor do credito é: %.1f\n", valor_cred);

    }

    if (saldo_med <= 400 && saldo_med > 300){
         percent2 = saldo_med * 0.25;
        valor_cred = saldo_med + percent2;

        printf("Seu valor do credito é: %.1f\n", valor_cred);
    }

   if (saldo_med >= 200 && saldo_med <= 300){
        percent3 = saldo_med * 0.2;
        valor_cred = saldo_med + percent3;

        printf("Seu valor do credito é: %1.f\n", valor_cred);

    }

    if (saldo_med < 200){
         percent4 = saldo_med * 0.1;
        valor_cred = saldo_med + percent4;

        printf("Seu valor de credito é: %1.f\n", valor_cred);

    }

    return 0;

}
//algoritmo
//declare saldo_medio, valor_credito, percent numerico
//escreva "Digite seu saldo médio"
//leia saldo_medio
//se saldo_medio > 400
//entao inicio
//	percent <- saldo_medio * 0.3
//	valor_credito <- saldo_medio + percent
//	escreva "Seu valor do crédito é : ", valor_credito
//fim
//se saldo_medio <= 400 e saldo_medio > 300
//entao inicio
//	percent <- saldo_medio * 0.25
//	valor_credito <- saldo_medio + percent
//	escreva "Seu valor do credito é : ", valor_credito
//fim
//se saldo_medio <= 300 e saldo_medio > 200
//entao inicio
//	percent <- saldo_medio * 0.2
//	valor_credito <- saldo_medio + percent
//	escreva "Seu valor do crédito é : ", valor_credito
//fim
//se saldo_medio <= 200
//entao inicio
//	percent <- saldo_medio * 0.1
//	valor_credito <- saldo_medio + percent
//	escreva "Seu valor do crédito é : ", valor_credito
//fim
//fim_algoritmo