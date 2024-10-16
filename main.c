#include <stdio.h>
#include "quadro.h"
#include "artista.h"



#define LINHAS 20 
#define COLUNAS 80

void imprimeOpcoesMenu();

int main() {
    
    char quadro[LINHAS][COLUNAS];
    criarQuadro(quadro);

    int qtdObras = 0, option = 0, i;

    do{
        unsigned int seed = (unsigned int) time(NULL);

        do{
            imprimeOpcoesMenu();

    printf("Digite o tipo de figura basica desejada: \n");
    scanf("%d", &option);
    printf("\n");

    if (option == 6){
        printf("\nVolte sempre!\n");
        exit(1);
    }

    if(option > 6){
        printf("Opcao invalida! Tente novamente...\n\n");
        break;
    }

    printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio): \n");
    scanf("%d", &qtdObras);
    printf("\n");

    if (qtdObras <= 0) qtdObras = rand() % 100 + 1;
   
    if (qtdObras > 100) qtdObras = 100;
    
    } while (option > 6);
        
    
    

        switch (option){
            case 1:
                for (i = 0; i < qtdObras; i++){
                desenharAsteriscoSimples(quadro,seed);
                }
                imprimirQuadro(quadro);
                break;
            case 2:
                for (i = 0; i < qtdObras; i++){
                desenharSomaComAsteriscos(quadro,seed);
                }   
                imprimirQuadro(quadro);
                break;
            case 3:
                for (i = 0; i < qtdObras; i++){
                desenharLetraX(quadro,seed);
                }
                imprimirQuadro(quadro); 
                break;
            case 4:
                for (i = 0; i < qtdObras; i++){
                desenharFiguraAleatoria(quadro,seed);
                }
                imprimirQuadro(quadro); 
                break;   
            case 5:
                for (i = 0; i < qtdObras; i++){
                desenharCometa(quadro,seed);
                }
                imprimirQuadro(quadro); 
                break;     
                default:
                printf("\n");
                break;
    }
        limparQuadro(quadro);
    } while (option);
    

    
    return 0;
}

void imprimeOpcoesMenu(){
    printf("\n");
    printf("\n");
    printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n");
    printf("=================================\n");
    printf("Escolha o tipo de figura basica a ser usada para criar a obra:\n");
    printf("1 - asterisco simples.\n");
    printf("2 - simbolo de soma com asteriscos.\n");
    printf("3 - letra X com asteriscos.\n");
    printf("4 - figuras aleatorias\n");
    printf("5 - cometa ( #---) \n");
    printf("6 - Sair\n");
    printf("\n");
    printf("\n");
}