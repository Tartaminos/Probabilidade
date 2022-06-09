#include <stdio.h>

void binomial_individual(){
    printf("to na binomial individual");
}

void binomial_acumulada(){
    printf("to na binomial acumulada");
}

int main(void){
    int opcao, x, C, n, p, q, controle_menu;

    printf("Selecione a opção desejada: \n");
    printf("1 - Probabilidade Binomial Individual \n");
    printf("2 - Probabilidade Binomial Acumulada \n");
    printf("0 - Sair \n");
    scanf("%d", opcao);

    while (controle_menu != 0) {
        if (opcao == 1) {
            printf("digite as entradas que não sei qual é: \n");
            scanf("%d", x);
            binomial_individual();
        } else if (opcao == 2)
        {
            printf("digite as entradas que não sei qual é: \n");
            scanf("%d", x);
            binomial_acumulada();
        } else if (opcao == 3)
        {
            controle_menu = 0;
        } else {
            printf("Entrada inválida");
        }
    }
    
    
    return 0;
}