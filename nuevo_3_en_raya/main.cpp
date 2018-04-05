#include <stdio.h>
#include <stdlib.h>

#define N 3
#define J 2

const char simbolo[J] = { 'X', 'O' };

void limpiar(char tablero[N][N]){

    for (int f=0; f<N; f++)
	for (int c=0; c<N; c++)
	    tablero[f][c] = ' ';
}

void imprimir(char tablero[N][N]){
    system("clear");
    for(int f=0; f<N; f++){
	for (int c=0; c<N; c++)
	    printf(" %c %c", tablero[f][c], c !=2 ? '|' : ' ');
	if (f !=2)
	    printf("\n---+---+---\n");
    } 
    printf("\n");
}

void preguntar(int turno, int *f,int  *c){

    printf("Jugador %i: \n", turno % 2 + 1);
    printf("Introduce las coordenadas: fila,columna ");
    scanf(" %i , %i", f, c);

}

int main(){

    int turno = 0;
    int f,c;
    char tablero[N][N];

    limpiar(tablero);
    for (turno=0; turno<9; turno++){
	imprimir(tablero);
	preguntar(turno, &f, &c);
	tablero[f][c] = simbolo[turno % 2];
    }

    return EXIT_SUCCESS;
}
