#include <stdio.h>
// Q1)

int main() {
 
    int quantLaranjas;
    double precoLaranja;

    printf("Quantidade de laranjas compradas: ");
    scanf("%d", &quantLaranjas);

    if (quantLaranjas < 12) {
        precoLaranja = quantLaranjas * 0.80;
        printf("Preço da unidade: R$%.2f\n", 0.80);
        printf("Preço total: R$%.2f\n", precoLaranja);
    } else {
        precoLaranja = quantLaranjas * 0.65;
        printf("Preço da unidade: R$%.2f\n", 0.65);
        printf("Preço total: R$%.2f\n", precoLaranja);
    }

    return 0;
}
