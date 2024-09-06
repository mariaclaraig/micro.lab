#include <stdio.h>
#include <time.h>

#define TEMPO_VERDE 12000
#define TEMPO_AMARELO 3000
#define TEMPO_VERMELHO 15000

typedef enum {VERDE, AMARELO, VERMELHO} EstadoSemaforo;

void delay_ms(int milissegundos) {
    clock_t start_time = clock();
    while (clock() < start_time + milissegundos * CLOCKS_PER_SEC / 1000);
}

int main() {
    EstadoSemaforo estadoAtual = VERDE;

    while (1) {
        switch (estadoAtual) {
            case VERDE:
                printf("Semáforo Verde - Aguarde\n", TEMPO_VERDE);
                delay_ms(TEMPO_VERDE);
                estadoAtual = AMARELO;
                break;

            case AMARELO:
                printf("Semáforo Amarelo - Aguarde\n", TEMPO_AMARELO);
                delay_ms(TEMPO_AMARELO);
                estadoAtual = VERMELHO;
                break;

            case VERMELHO:
                printf("Semáforo Vermelho - Aguarde\n", TEMPO_VERMELHO);
                delay_ms(TEMPO_VERMELHO);
                estadoAtual = VERDE;
                break;

            default:
                printf("Erro.\n");
                return 1;
        }
    }

    return 0;
}
