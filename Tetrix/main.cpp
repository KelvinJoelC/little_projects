#include <stdlib.h>
#include <stdio.h>
#define X 5
#define Y 13
void IniciaTablero(int tablero[Y][X]);
void PintarTablero(int tablero[Y][X]);
void Fun_figuras();

int main(){
    int tablero[Y][X];
    IniciaTablero(tablero);
    PintarTablero(tablero);
     



    return EXIT_SUCCESS;
}







void IniciaTablero(int tablero[Y][X]){

    for (int fila=0; fila < Y; fila++){
        for( int columna=0; columna < X; columna++ )
            tablero[fila][columna]=0;
    }
}

void PintarTablero(int tablero[Y][X]){

    for (int fila=0; fila < Y; fila++){
        for( int columna=0; columna < X; columna++ ){
            printf("%i",tablero[fila][columna]);
        }
        printf("\n");
    }
}
void Fun_figuras(){ /*7 Tipos, 4 Posiciones, 5 filas, 5 columnas*/
    char figuras [7][4][5][5]={
    {/*Cuadrado*/
       {
         {0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0},
         {0, 0, 2, 1, 0},
         {0, 0, 1, 1, 0},
         {0, 0, 0, 0, 0}
       },
       {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 2, 1, 0},
        {0, 0, 1, 1, 0},
        {0, 0, 0, 0, 0}
      },
      {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 2, 1, 0},
        {0, 0, 1, 1, 0},
        {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0},
      {0, 0, 2, 1, 0},
      {0, 0, 1, 1, 0},
      {0, 0, 0, 0, 0}
      }
   }, 
/* I */
  {
      {
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0},
      {0, 1, 2, 1, 1},
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 1, 0, 0}, 
      {0, 0, 2, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 1, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0},
      {1, 1, 2, 1, 0},
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 1, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 2, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 0, 0, 0}
      }
      },
/* L */
      {
      {
      {0, 0, 0, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 2, 0, 0},
      {0, 0, 1, 1, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0},
      {0, 1, 2, 1, 0},
      {0, 1, 0, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 1, 1, 0, 0},
      {0, 0, 2, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 0, 1, 0},
      {0, 1, 2, 1, 0},
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0}
      }
      },
/* L inversa*/
      {
      {
      {0, 0, 0, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 2, 0, 0},
      {0, 1, 1, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 1, 0, 0, 0},
      {0, 1, 2, 1, 0},
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 1, 1, 0},
      {0, 0, 2, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0},
      {0, 1, 2, 1, 0},
      {0, 0, 0, 1, 0},
      {0, 0, 0, 0, 0}
      }
      },
/*N*/

      {
      {
      {0, 0, 0, 0, 0},
      {0, 0, 0, 1, 0},
      {0, 0, 2, 1, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0},
      {0, 1, 2, 0, 0},
      {0, 0, 1, 1, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 1, 2, 0, 0},
      {0, 1, 0, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 1, 1, 0, 0},
      {0, 0, 2, 1, 0},
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0}
      }
      },
/*N Inversa*/

      {
      {
      {0, 0, 0, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 2, 1, 0},
      {0, 0, 0, 1, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0},
      {0, 0, 2, 1, 0},
      {0, 1, 1, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 1, 0, 0, 0},
      {0, 1, 2, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 1, 1, 0},
      {0, 1, 2, 0, 0},
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0}
      }
      },
      /*T*/
      {
      {
      {0, 0, 0, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 2, 1, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0},
      {0, 1, 2, 1, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 1, 2, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 0, 0, 0, 0}
      },
      {
      {0, 0, 0, 0, 0},
      {0, 0, 1, 0, 0},
      {0, 1, 2, 1, 0},
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0}
      }
      }
    };
}

void insertar(){




}