
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
    printf("Introduce las coordenadas: fila,columna (0,0) ");
    scanf(" %i , %i", f, c);

}

int ganador(int turno, char tablero[N][N], int *finish){
    system("clear");
    imprimir(tablero);
    printf("\n");
    printf("Jugador %i, has ganado!!",turno % 2 + 1);
    *finish = 1;
}

void comprobar(int turno, char tablero[N][N], int *finish){

    if (tablero[0][0] != ' '){
        if (tablero[0][0] == tablero[0][1] && tablero[0][0] == tablero[0][2])
            ganador(turno,tablero,finish);
        if (tablero[0][0] == tablero[1][0] && tablero[1][0]== tablero[2][0])
            ganador(turno,tablero,finish);
        if (tablero[0][0] == tablero[1][1] && tablero[1][1]== tablero[2][2])
            ganador(turno,tablero,finish);
    }
    if (tablero[0][1] != ' ')
        if (tablero[0][1] == tablero[1][1] && tablero[0][1]== tablero[2][1])
            ganador(turno,tablero,finish);

    if (tablero[1][2] != ' '){
        if (tablero[1][2] == tablero[0][2] && tablero[1][2] == tablero[2][2])
            ganador(turno,tablero,finish);
        if (tablero[1][2] == tablero[1][1] && tablero[1][2]== tablero[1][0])
            ganador(turno,tablero,finish);
    }
    if (tablero[2][1] != ' ')
        if (tablero[2][2] == tablero[2][1] && tablero[2][2] == tablero[2][0])
            ganador(turno,tablero,finish);
}

int main(){

    int turno = 0;
    int finish=0;
    int f,c;
    char tablero[N][N];

    limpiar(tablero);
    do{
            imprimir(tablero);
            preguntar(turno, &f, &c);
            if  (tablero[f][c] == ' ')
                tablero[f][c] = simbolo[turno % 2];
            else
                turno--;
             turno++;
             comprobar(turno, tablero,finish);
    }
    while(finish = 0);
  
   return EXIT_SUCCESS;
}
