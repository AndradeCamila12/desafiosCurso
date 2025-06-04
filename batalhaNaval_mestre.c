#include <stdio.h>

 int main(){

// *** Desafio batalha naval - MESTRE ***

//criando uma matriz que represente o tabuleiro de batalha naval, sem navios
//dessa vez será usado loops em vez de escrever a parte dos 0s valor por valor

char letras [11] = {' ','A','B','C','D','E','F','G','H','I','J'};
int tabuleiro [10][11];
  
  printf("*** TABULEIRO - BATALHA NAVAL ***\n");
  printf("\n");

  for (int a = 0; a < 11; a++){
    printf("%c ", letras [a]);
  }
  
  printf("\n");
  
  for (int i = 0; i < 10; i++) {
  	for (int j = 0; j < 11; j++){


        if (j == 0) {
        	tabuleiro [i][j] = i + 1;
          
        } else {
            tabuleiro [i][j] = 0;  
        }
        
        printf("%d ", tabuleiro [i][j]);
    
    	}
        
        printf("\n");
        
    }
  
  //falta determinar as habilidades especiais
  
  
  


  return 0;
}