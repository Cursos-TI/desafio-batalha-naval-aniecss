#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0}; 

    int linha_v = 2;
    int coluna_v = 4;
    int tamanho_v = 4;

    int linha_h = 6;
    int coluna_h = 1;
    int tamanho_h = 3;

    // Posicionar vertical
    for (int i = 0; i < tamanho_v; i++) {
        tabuleiro[linha_v + i][coluna_v] = 1;
    }

    // Posicionar navio horizontal
    for (int i = 0; i < tamanho_h; i++) {
        tabuleiro[linha_h][coluna_h + i] = 1;
    }

    printf("    ");
    for (int i = 1; i <= 10; i++) {
        printf("%2d ", i); // Imprime números das colunas
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c | ", linha[i]); // Imprime a letra da linha

        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 1) {
                printf(" X "); // Onde tem navio
            } else {
                printf(" ~ "); // Água
            }
        }
        printf("\n");
    }

    return 0;
}
