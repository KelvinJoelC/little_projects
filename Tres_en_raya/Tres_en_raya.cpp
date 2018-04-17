

#include <stdio.h>
#include <stdlib.h>

#define N 3


const char simbolo[] = { 'X', 'O' };
bool finish = false;

void limpiar(char tablero[N][N]){

    for (int f=0; f<N; f++)
        for (int c=0; c<N; c++)
            tablero[f][c] = ' ';
}

void imprimir(char tablero[N][N]){
    system("clear");
    printf("\n");
    system("toilet -fpagga 3enRaya");
    printf("\n");
    for(int f=0; f<N; f++){
        printf("\t");
        for (int c=0; c<N; c++)
            printf(" %c %c", tablero[f][c], c !=2 ? '|' : ' ');
        if (f !=2)
            printf("\n\t---+---+---\n");
    }
    printf("\n");
}

void preguntar(int turno, int *f,int  *c){
    printf("\n");
    printf("Jugador %i ( %c ): \n", turno % 2 + 1, simbolo[turno % 2]);
    printf("Introduce las coordenadas: fila,columna x,y del 0-2: ");
    scanf(" %i , %i", f, c);

}
void ganador(int turno, char tablero[N][N]){
    system("clear");
    imprimir(tablero);
    printf("\n");
    printf("Jugador %i, has ganado!!\n",turno % 2 + 1);
    finish = true;
}

void comprobar(int turno, char tablero[N][N]){

    if (tablero[0][0] != ' '){
        if (tablero[0][0] == tablero[0][1] && tablero[0][0] == tablero[0][2])
            ganador(turno,tablero);
        if (tablero[0][0] == tablero[1][0] && tablero[1][0]== tablero[2][0])
            ganador(turno,tablero);
        if (tablero[0][0] == tablero[1][1] && tablero[1][1]== tablero[2][2])
            ganador(turno,tablero);
    }
    if (tablero[0][1] != ' ')
        if (tablero[0][1] == tablero[1][1] && tablero[0][1]== tablero[2][1])
            ganador(turno,tablero);

    if (tablero[1][2] != ' '){
        if (tablero[1][2] == tablero[0][2] && tablero[1][2] == tablero[2][2])
            ganador(turno,tablero);
        if (tablero[1][2] == tablero[1][1] && tablero[1][2]== tablero[1][0])
            ganador(turno,tablero);
    }
    if (tablero[2][1] != ' ')
        if (tablero[2][2] == tablero[2][1] && tablero[2][2] == tablero[2][0])
        ganador(turno,tablero);
    if (tablero[0][2] != ' ')
        if (tablero[0][2] == tablero[1][1] && tablero[0][2] == tablero[2][0])
        ganador(turno,tablero);
} 

int main(){

    int turno = 0;
    int f,c;
    char tablero[N][N];

    limpiar(tablero);
    do {	
        imprimir(tablero);
        preguntar(turno, &f, &c);
        if  (tablero[f][c] == ' '){
            tablero[f][c] = simbolo[turno % 2];
            imprimir(tablero);}
        else
            turno--;
        turno++;
        comprobar(turno, tablero);

    }while (turno < 9 && !finish);
    if (turno>=9 && finish==false)
        printf("Empate!! Ninguno gana!!\n");
    return EXIT_SUCCESS;
}
