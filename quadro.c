#include "quadro.h"

// Função para criar o quadro
void criarQuadro(char quadro[LINHAS][COLUNAS]) {
    
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            quadro[i][j] = ' ';
        }
    }

    for (int j = 0; j < COLUNAS; j++) {
        quadro[0][j] = '-';
        quadro[LINHAS - 1][j] = '-';
    }

    for (int i = 1; i < LINHAS - 1; i++) {
        quadro[i][0] = '|';
        quadro[i][COLUNAS - 1] = '|';
    }
}

// Função para imprimir o quadro
void imprimirQuadro(char quadro[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            putchar(quadro[i][j]);
        }
        putchar('\n');
    }
}


//Função para limpar o quadro
void limparQuadro(char quadro[LINHAS][COLUNAS]){
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            quadro[i][j] = ' ';
        }
    }

    for (int j = 0; j < COLUNAS; j++) {
        quadro[0][j] = '-';
        quadro[LINHAS - 1][j] = '-';
    }

    for (int i = 1; i < LINHAS - 1; i++) {
        quadro[i][0] = '|';
        quadro[i][COLUNAS - 1] = '|';
    }
    
}
