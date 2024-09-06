#include <stdio.h>

// Q3)
int main() {
    
    int quantTestes;
    int num;
    
    scanf("%d", &quantTestes);
    
    for (int i = 0; i < quantTestes; i++) {
        
        int par = 0;
        int impar = 0;
        int posit = 0;
        int negat = 0;
        
        for (int j = 0; j < 5; j++) {
            scanf("%d", &num);
            
            if (num % 2 == 0) {
                par++;
            } else {
                impar++;
            }
            if (num >= 0) {
                posit++;
            } else {
                negat++;
            }
        }
        
        printf("Quantidade de numeros pares: %d\n", par);
        printf("Quantidade de numeros impares: %d\n", impar);
        printf("Quantidade de numeros positivos: %d\n", posit);
        printf("Quantidade de numeros negativos: %d\n", negat);
        printf("\n");
    }

    return 0;
}
