#include <stdio.h>

//criando as estruturas de recursividade dentro da função void

void moverTorre(int torre) {
    if (torre > 0) {
        printf("Direita\n");
        moverTorre(torre - 1);
    }
}

void moverBispo(int bispo) {
    if (bispo > 0) {
        printf("Cima - Direita\n");
        moverBispo(bispo - 1);
    }
}

void moverRainha(int rainha) {
    if (rainha > 0) {
        printf("Direita\n");
        moverRainha(rainha - 1);
    }
}

int main(){

//movimento da TORRE usando recursividade 

printf("Movendo a TORRE 5 casas para a direita:\n");
printf("\n");

    int casasTorre = 5;

    moverTorre(casasTorre);

printf("\n");
printf(" *** --------------------------- ***\n");
printf("\n");

//movimento do BISPO com recursividade

printf("Movendo o BISPO 5 casas para a diagonal cima-direita:\n");
printf("\n");

    int casasBispo = 5;

    moverBispo(casasBispo);

printf("\n");
printf(" *** --------------------------- ***\n");
printf("\n");

//movimento do BISPO com loop aninhado

printf("Agora refazendo o movimento do bispo com loop aninhado:\n");
printf("\n");

for (int i = 0, j = 10; i < j; i++, j--) {
        
        printf("Cima - direita\n");
    }

printf("\n");
printf(" *** --------------------------- ***\n");
printf("\n");


//movimento da RAINHA com recursividade

printf("Movendo a RAINHA 8 casas para a direita:\n");
printf("\n");
    
    int casasRainha = 8;

    moverRainha(casasRainha);

printf("\n");
printf(" *** --------------------------- ***\n");
printf("\n");

//movimento do CAVALO com loop aninhado com + de 1 variável

printf("Movendo o cavalo em L, 2 casas para cima e 1 para a direita:\n");
printf("\n");

 for (int i = 0, j = 3; i < j; i++, j--) {
  
        printf("Cima\n");
    }
    	printf("Direita\n");
  

printf("\n");
printf(" *** --------------------------- ***\n");
printf("\n");



    return 0;
}
