#include <stdio.h>

int somar(int n){
    int soma = 0;
    
    while(n > 0){
        int dig = n % 10;
        soma += dig;
        n = n / 10;
    }

    return soma;
}

int main(){
    int num;
    int resultado;

    printf("Informe um numero:\n");
    scanf("%d", &num);

    resultado = somar(num);

    printf("Soma dos digitos: %d\n", resultado);

    return 0;
}
