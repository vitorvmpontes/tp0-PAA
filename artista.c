#include "artista.h"


// Função para verificar se uma posição está livre no quadro
bool posicaoLivre(char quadro[LINHAS][COLUNAS], int linha, int coluna, int largura, int altura) {
    for (int i = linha; i < linha + altura; i++) {
        for (int j = coluna; j < coluna + largura; j++) {
            if (quadro[i][j] != ' ') {
                return false; // Há sobreposição
            }
        }
    }
    return true;
    
}
void desenharCometa(char quadro[LINHAS][COLUNAS], unsigned int seed) {
    srand(seed);
    int linha, coluna;

    // Tenta encontrar uma posição livre para o cometa
    do {
        linha = rand() % LINHAS;         
        coluna = rand() % (COLUNAS - 4); 
    } while (!posicaoLivre(quadro, linha, coluna, 4, 1)); 

    // Desenha o cometa no quadro
    quadro[linha][coluna] = '#';      
    quadro[linha][coluna + 1] = '-';  
    quadro[linha][coluna + 2] = '-';  
    quadro[linha][coluna + 3] = '-'; 
}


void desenharAsteriscoSimples(char quadro[LINHAS][COLUNAS], unsigned int seed) {
    srand(seed);
    int linha, coluna;

    do {
        linha = rand() % (LINHAS - 2) + 1;  
        coluna = rand() % (COLUNAS - 2) + 1; 
    } while (!posicaoLivre(quadro, linha, coluna, 1, 1));

    quadro[linha][coluna] = '*'; 
}


void desenharSomaComAsteriscos(char quadro[LINHAS][COLUNAS], unsigned int seed) {
    srand(seed);
    int linha, coluna;

    
    do {
        linha = rand() % (LINHAS - 3) + 1;   
        coluna = rand() % (COLUNAS - 3) + 1;
    } while (!posicaoLivre(quadro, linha, coluna, 3, 3));

    quadro[linha][coluna + 1] = '*';
    quadro[linha + 1][coluna] = '*';
    quadro[linha + 1][coluna + 1] = '*';
    quadro[linha + 1][coluna + 2] = '*';
    quadro[linha + 2][coluna + 1] = '*';
}


void desenharLetraX(char quadro[LINHAS][COLUNAS], unsigned int seed) {
    srand(seed);
    int linha, coluna;

    do {
        linha = rand() % (LINHAS - 3) + 1;   
        coluna = rand() % (COLUNAS - 3) + 1;
    } while (!posicaoLivre(quadro, linha, coluna, 3, 3));

    quadro[linha][coluna] = '*';         
    quadro[linha + 1][coluna + 1] = '*'; 
    quadro[linha + 2][coluna + 2] = '*'; 
    quadro[linha + 2][coluna] = '*';     
    quadro[linha][coluna + 2] = '*';     
}

void desenharFiguraAleatoria(char quadro[LINHAS][COLUNAS], unsigned int seed) {
    int figuraAleatoria = rand() % 4 + 1; 
    switch (figuraAleatoria) {
        case 1:
            desenharAsteriscoSimples(quadro,seed);
            break;
        case 2:
            desenharSomaComAsteriscos(quadro,seed);
            break;
        case 3:
            desenharLetraX(quadro,seed);
            break;

        case 4: 
             desenharCometa(quadro,seed);
             break;   
        default:
            printf("Erro: figura aleatoria fora do intervalo esperado.\n");
            break;
    }
}


