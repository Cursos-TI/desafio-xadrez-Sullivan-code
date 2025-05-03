#include <stdio.h>

int main() {
    // Define o número de movimentos para cada peça
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;

    // Torre: Move 5 casas para a direita (usando for)
    printf("Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    // Bispo: Move 5 casas na diagonal (usando while)
    printf("\nBispo:\n");
    int contadorBispo = 0;
    while (contadorBispo < movimentosBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // Rainha: Move 8 casas para a esquerda (usando do-while)
    printf("\nRainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    return 0; // Finaliza o programa
}