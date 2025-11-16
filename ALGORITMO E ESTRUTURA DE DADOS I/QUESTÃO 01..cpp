#include <stdio.h>

int totalp(int vet[], int tam){
    int i, p = 0;
    for(i = 0; i < tam; i++){
        if(vet[i] % 2 == 0){
            p++;
        }
    }
    return p;
}

int menornum(int vet[], int tam){
    int i, menor = vet[0];
    for(i = 1; i < tam; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    return menor;
}

int maiornum(int vet[], int tam){
    int i, maior = vet[0];
    for(i = 1; i < tam; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}

float mediaval(int vet[], int tam){
    int i, soma = 0;
    for(i = 0; i < tam; i++){
        soma += vet[i];
    }
    return soma / (float)tam;
}

int main(){
    int nums[10];
    int i;

    printf("Digite 10 numeros:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &nums[i]);
    }

    int menor = menornum(nums, 10);
    int maior = maiornum(nums, 10);
    float med = mediaval(nums, 10);
    int pares = totalp(nums, 10);

    printf("Media: %.2f\n", med);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Quantidade de pares: %d\n", pares);

    return 0;
}
