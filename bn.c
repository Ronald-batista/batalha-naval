#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j;
    int matriz[8] [8]={0};
    int barco, coord1, coord2;
    int orientacao;
    printf("SE PREPARE, VAMOS JOGAR BATALHA NAVAL!!\n");
    while (barco != 0){
    printf("Digite o tipo de barco\n");
    scanf("%d", &barco);
    if (barco == 0) break; //condicao de parada do looping
    printf("Digite as coordenadas do canto superior esquero (LxC) \n");
    scanf("%d", &coord1);
    scanf("%d", &coord2);
    if ((coord1 > 7) || (coord2 > 7)) continue; //valores fora da matriz, então pede para o usuario digitar a ultima iteração novamente.
    printf("Digite a orientação (1 para vertifcal ou 0 para horizontal) \n");
    scanf("%d", &orientacao);
    if ((orientacao != 1) && (orientacao != 0)) continue; // orientacao invalida

    if (orientacao == 0){
      i=coord1;
      for (j=coord2; j < coord2+barco ; j++ ){
        if (matriz[i][j] != 0){
            printf("\n-----AVISO-----Ja possui um barco nessa posicao\n");
             continue;
        }
        matriz[i][j] = barco;
      }  
    } else{
      j=coord2;
      for (i=coord1; i < coord1+barco ; i++ ){
        if (matriz[i][j] != 0){
            printf("\n-----AVISO-----Ja possui um barco nessa posicao\n");
             continue;
        }
        matriz[i][j] = barco;

      }
    }

  
  }


  int x,y;
  int aux=0;
  int tiros=0;

  //MOSTRAR MATRIZ PARA O USUARIO
  printf("\nMatriz preenchida pelo usuario\n");
  for (i=0; i<8 ; i++){
    printf("\n");
    for (j=0; j<8 ; j++){
        printf("%d",matriz[i][j] );
    }
    }


  while (aux==0){
    //verifica se a matriz toda é zero
    for (i=0; i < 8 ; i++){
      for (j=0; j < 8 ; j++){
        if (matriz[i][j] != 0){
          aux=1;
        }
      }
    }
     // se for 0, da break e mostra o contador de tiros na tela (fora do while)
    if (aux==0){
      break;
    }
     //se nao for, o computador atira
    else{
      x = rand() % 7;
      y = rand() % 7;
      matriz[x][y] = 0;
      tiros++;
      aux=0;
    }
  }

  //Mostrar contador de tiros na tela
  printf("\n\n\nO computador precisou de: %d tiros para destruir todos os barcos \n", tiros);
 
        

    




}

