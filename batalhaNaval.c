#include <stdio.h>

#define TAMANHO_TABULEIRO 10

int main() {
    // Tabuleiro do jogo (0 = água, 1 = parte de navio)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    
    // Navio horizontal (tamanho 3) - novas coordenadas
    int navio_horizontal_x = 1;
    int navio_horizontal_y = 2;
    int tamanho_horizontal = 3;
    
    // Navio vertical (tamanho 4) - novas coordenadas
    int navio_vertical_x = 3;
    int navio_vertical_y = 7;
    int tamanho_vertical = 4;
    
    // Posicionar navio horizontal
    for (int i = 0; i < tamanho_horizontal; i++) {
        if (navio_horizontal_y + i < TAMANHO_TABULEIRO) {
            tabuleiro[navio_horizontal_x][navio_horizontal_y + i] = 1;
        }
    }
    
    // Posicionar navio vertical
    for (int i = 0; i < tamanho_vertical; i++) {
        if (navio_vertical_x + i < TAMANHO_TABULEIRO) {
            tabuleiro[navio_vertical_x + i][navio_vertical_y] = 1;
        }
    }
    
    // Exibir coordenadas dos navios
    printf("Batalha Naval - Nivel Novato\n");
    printf("Coordenadas dos navios:\n\n");
    
    printf("Navio horizontal (tamanho %d):\n", tamanho_horizontal);
    for (int i = 0; i < tamanho_horizontal; i++) {
        if (navio_horizontal_y + i < TAMANHO_TABULEIRO) {
            printf("(%d, %d)", navio_horizontal_x, navio_horizontal_y + i);
            if (i < tamanho_horizontal - 1) {
                printf(", ");
            }
        }
    }
    printf("\n\n");
    
    printf("Navio vertical (tamanho %d):\n", tamanho_vertical);
    for (int i = 0; i < tamanho_vertical; i++) {
        if (navio_vertical_x + i < TAMANHO_TABULEIRO) {
            printf("(%d, %d)", navio_vertical_x + i, navio_vertical_y);
            if (i < tamanho_vertical - 1) {
                printf(", ");
            }
        }
    }
    printf("\n");
    
    // Visualização simples do tabuleiro (opcional)
    printf("\nVisualizacao do tabuleiro:\n");
    printf("  0 1 2 3 4 5 6 7 8 9\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d ", i);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%c ", tabuleiro[i][j] ? 'N' : '.');
        }
        printf("\n");
    }
    return 0;
}
