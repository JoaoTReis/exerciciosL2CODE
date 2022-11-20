#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int i,j;
    scanf("%d %d",&i,&j);
    int contador=0,contador2=0;
    int orientacao;
    char direcao[i*j];
    int movimentacao;
    scanf("%d",&orientacao);
    int k;

    whyle(direcao[i*j]!= '\0');{

        printf("%s",direcao[k]);
        k++;

    }
       
    /*
    if(orientacao>3){
      for(int i=3;i<orientacao;i++){
        contador++;
      }
        if(contador==1){
            direcao='N';
        }
        if(contador==2){
            direcao='L';
        }
        if(contador==3){
            direcao='S';
        }
        if(contador==4){
            direcao='O';
        }
       
    }

    if(orientacao<0){
      for(int i=0;i>orientacao;i--){
        contador2++;
      }
        if(contador2==4){
            direcao='N';
        }
        if(contador2==3){
            direcao='L';
        }
        if(contador2==2){
            direcao='S';
        }
        if(contador2==1){
            direcao='O';
        }
       
    }

    if(orientacao==0){
            direcao='N';
        }
        if(orientacao==1){
            direcao='L';
        }
        if(orientacao==2){
            direcao='S';
        }
        if(orientacao==3){
            direcao='O';
        }

    printf("direcao : %c",direcao);
    */

    
    

}