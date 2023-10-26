#include <stdio.h>

int main() {

    int numero;

    do{
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    }
    while (numero == 0);
        if (numero % 2 == 0){
            printf("É par!\n");
        }
        else{
            printf("É Impar!\n");
        }

    return 0;
} 
