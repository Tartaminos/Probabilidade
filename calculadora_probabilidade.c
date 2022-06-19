#include <stdio.h>

int binomial_individual(){
    printf("to na binomial individual");
}

int binomial_acumulada(){
    printf("to na binomial acumulada");
}

int menu (void){
    int menu_control = 1, x, C, n, p, q, option;

    printf("Selecione a opção desejada: \n");
    printf("1 - Probabilidade Binomial Individual \n");
    printf("2 - Probabilidade Binomial Acumulada \n");
    printf("3 - Sair \n");
    scanf("%d", &option);

    while (menu_control != 0) {
        if (option == 1) {
            printf("digite as entradas que não sei qual é: \n");
            scanf("%d", &x);
            binomial_individual();
            menu();

        } else if (option == 2)
        {
            printf("digite as entradas que não sei qual é: \n");
            scanf("%d", &x);
            binomial_acumulada();
            menu();
        } else if (option == 3)
        {
            printf("aqui é pra sair do programa");
            menu_control = 0;
            break;
        } else {
            printf("Entrada inválida");
            menu();
        }
    }
    
    return 0;
}

int main(void){

    menu();   
    
    return 0;
}