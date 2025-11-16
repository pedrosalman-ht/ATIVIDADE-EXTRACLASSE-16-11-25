#include <stdio.h>

int anobissexto(int ano){
    if (ano % 400 == 0){
        return 1;
    }
    if (ano % 4 == 0 && ano % 100 != 0){
        return 1;
    }
    return 0;
}

int main(){
    int ano;

    printf("Digite um ano:\n");
    scanf("%d", &ano);

    if (anobissexto(ano)){
        printf("O ano e bissexto\n");
    } else {
        printf("O ano nao e bissexto\n");
    }

    return 0;
}
