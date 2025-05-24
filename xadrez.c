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

//movendo o BISPO 5 casas na diagonal cima-direita utilizando DO-WHILE:
printf("Movimentando o bispo:\n");

//definindo e inicializando as variáveis com uma posição inicial para o bispo
int linha = 1;
int coluna = 3;
int bispo; 

do {        
       printf("Digite o número de casas que a peça irá se mover: ");
       scanf("%d", &bispo);

        linha += bispo;
        coluna += bispo;
        bispo++;

        // Verifica se o movimento é válido (dentro dos limites do tabuleiro)
        if (linha >= 0 && coluna < 9) {
            printf("Posição após movimento: casa (%d, %d)\n", linha, coluna);
        } else {
            printf("Movimento inválido, fora do tabuleiro.\n");
    
        }
    } while (bispo < 5);

//movendo a RAINHA 8 casas para a esquerda usando FOR:

    for (int rainha = 0; rainha < 8; rainha++)
    {
        printf("esquerda\n");
    }
    

    return 0;
}
