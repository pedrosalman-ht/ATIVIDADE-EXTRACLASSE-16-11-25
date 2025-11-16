#include <stdio.h>

float soma(float a, float b){
    return a + b;
}

float subtrair(float a, float b){
    return a - b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){
    return a / b;
}

int main(){
    float n1, n2, res;
    int op;

    printf("Digite o primeiro numero:\n");
    scanf("%f", &n1);

    printf("Digite o segundo numero:\n");
    scanf("%f", &n2);

    printf("Escolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &op);

    if(op == 1){
        res = soma(n1, n2);
        printf("Resultado: %.2f\n", res);
    }
    else if(op == 2){
        res = subtrair(n1, n2);
        printf("Resultado: %.2f\n", res);
    }
    else if(op == 3){
        res = multiplicar(n1, n2);
        printf("Resultado: %.2f\n", res);
    }
    else if(op == 4){
        if(n2 == 0){
            printf("Erro: divisao por zero!\n");
        } else {
            res = dividir(n1, n2);
            printf("Resultado: %.2f\n", res);
        }
    }
    else{
        printf("Opcao invalida.\n");
    }

    return 0;
}
