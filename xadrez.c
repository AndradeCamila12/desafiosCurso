#include <stdio.h>

int main(){

// *** Desafio Xadrez - NOVATO ***

//movendo a TORRE 5 casas para a direita usando WHILE:

int torre = 1;

    printf("Movimentando a torre:\n");
    while ((torre <= 5) && (torre != 0))
    {
       printf("direita\n");
       torre++;
    }

printf("\n");
printf(" *** --------------------------- ***\n");
printf("\n");


//movendo o BISPO 5 casas na diagonal cima-direita utilizando DO-WHILE:

printf("movimentando o bispo:\n");

int bispo = 0;

    do {
        printf("cima\n");
        printf("direita\n");
        bispo++;
    } while (bispo < 5);

printf("\n");
printf(" *** --------------------------- ***\n");
printf("\n");


//movendo a RAINHA 8 casas para a esquerda usando FOR:

printf("Movimentando a rainha:\n");

    for (int rainha = 0; rainha < 9; rainha++)
    {
        printf("esquerda\n");
    }
    
printf("\n");
printf(" *** --------------------------- ***\n");
printf("\n");

////movendo o CAVALO 2 casas para a esquerda e 1 para a esquerda:

printf("Movimentando o cavalo:\n");

int i = 0;

    while (i < 2) {
        printf("baixo\n");

		if (i == 1) {
            for (int j = 0; j < 1; j++) {
                printf("esquerda\n");
            }
        }

        i++;
    }
    
printf("\n");
printf(" *** --------------------------- ***\n");
printf("\n");



    return 0;
}
