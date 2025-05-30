 #include <stdio.h>

 int main(){

// *** Desafio batalha naval - NOVATO e AVENTUREIRO ***

//criando uma matriz que represente o tabuleiro de batalha naval, sem navios

 char * tabuleiro [11][11] = {
  		  {" ", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"},
        {"1", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"2", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"3", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"4", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"5", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"6", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"7", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"8", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"9", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"10", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"}
  };


  printf(" *** TABULEIRO - BATALHA NAVAL ***\n");
  printf("\n");

  int i, j;

//segue o loop que vai exibir o tabuleiro com os navios posicionados

 for (i = 0; i < 11; i++){
  	for (j = 0; j < 11; j++){
      
  		if ((i == 2) && (j == 3 || j == 4 || j == 5)){
        	(tabuleiro [i][j] = "3"); //adiciona um navio na horizontal

        } if ((j == 8) && (i == 5 || i == 6 || i == 7)){
        	(tabuleiro [i][j] = "3"); //adiciona um navio na vertical

        }  if ((i == j) && (j == 4 || j == 5 || j == 6)){
        	tabuleiro [i][j] = "3"; //adiciona um navio na diagonal principal
            
        } if ((i + j == 10) && (i == 7 || i == 8 || i == 9)){
        	tabuleiro [i][j] = "3"; //adiciona um navio na diagonal secundária
        }
        
  	  printf("%s ", tabuleiro [i][j]); 

    }
 
      printf("\n");
 }



  return 0;

 }
