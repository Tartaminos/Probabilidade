#include <stdio.h>
#include <math.h>

int fatorial(int valor){
    if (valor <= 1){
        return(1);
    } else {
        return valor * fatorial(valor - 1);
    }
}

int combinacao(int n, int p){
    int fatorial_n, fatorial_n_menos_p, fatorial_p, resultado_da_combinacao;
    int n_menos_p;

    fatorial_n = fatorial(n);
    printf("%d", fatorial_n);

    if (p > n){
        n_menos_p = p - n;
    } else {
        n_menos_p = n - p;
    }
    fatorial_n_menos_p = fatorial(n_menos_p);
    printf("%d", fatorial_n_menos_p);

    fatorial_p = fatorial(p);
    printf("%d", fatorial_p);

    resultado_da_combinacao = (fatorial_n / fatorial_n_menos_p) * (fatorial_p);

    return resultado_da_combinacao;
}


int binomial_individual(void){
    double sucesso, falha, probabilidade;
    int n, p, C, x, resultado_combinacao;

    printf("Número de tentativas: \n");
    scanf("%d", &n);
    
    printf("Número de sucessos: \n");
    scanf("%d", &x);

    printf("Probabilidade de sucessos: \n");
    scanf("%d", &p);


    resultado_combinacao = combinacao(n, p);
    sucesso = (p/100) * (x);
    falha = pow((1-(p/100)), (n-x));
    probabilidade = resultado_combinacao * sucesso * falha;
    probabilidade = probabilidade * 100;
    printf("P(x = %d = %d ", x, probabilidade);
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