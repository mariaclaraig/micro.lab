#include <stdio.h>

//Q2
int main() {
    
    int n;
    int resultado;
    
    scanf("%d", &n);
    
    for (int i = n - 1; i > 0; i--) {
        resultado = n * i;
        printf("Resposta da multiplicacao de %d por %d: %d\n", n, i, resultado);
    }

    return 0;
}
