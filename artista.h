#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


#define LINHAS 20
#define COLUNAS 80

void desenharAsteriscoSimples(char quadro[LINHAS][COLUNAS], unsigned int seed);
void desenharSomaComAsteriscos(char quadro[LINHAS][COLUNAS], unsigned int seed);
void desenharLetraX(char quadro[LINHAS][COLUNAS], unsigned int seed);
void desenharCometa(char quadro[LINHAS][COLUNAS], unsigned int seed);
void desenharFiguraAleatoria(char quadro[LINHAS][COLUNAS], unsigned int seed);
bool posicaoLivre(char quadro[LINHAS][COLUNAS], int linha, int coluna, int largura, int altura);




