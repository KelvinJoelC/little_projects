#include <stdlib.h>
#include <stdio.h>

#include <string.h>
#define N 0x100


void inicio(int n_letras, int contador_vida){
    system("toilet -fpagga AHORCADO");
  for(int i=0; i < n_letras; i++)
  printf("_ ");
  for(int s=0; s < contador_vida; s++);
  printf(" %s", contador_vida =  2 ? "♡ ": "♥ ");
}

void ganas(){}
void pierdes(){}
void comprueba_letra(){

}

int main(){
    
    int contador_vida = 6;
    char letras[N]{'j','i','r','a','f','a'};
    int tamanopalabra = strlen(letras);
    inicio(tamanopalabra, contador_vida);
    int letra;
    printf("%i",tamanopalabra);

    return 0;

}
