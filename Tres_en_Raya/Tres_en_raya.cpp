
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 3 

void refrescar(char matriz[N][N]);
void insert_first(char matriz[N][N]);
void tablero(char matriz[N][N]);
void insert_values_J1 (char matriz[N][N]);	
void insert_values_J2 (char matriz[N][N]);

int main(){
		char matriz[N][N];
		refrescar(matriz);
		pause();


		return EXIT_SUCCESS;
	}

void refrescar(char matriz[N][N]){
		
//	int j,
	int contador = 0;

	insert_first(matriz);

	do{
		system("clear");
		tablero(matriz);
		if( contador % 2 == 0){	
		insert_values_J1(matriz);}
		else {
		insert_values_J2(matriz);}
//		j =ganador(matriz);
		contador++;

	}while(contador <=9 /* && j==2*/ );
/*	if (j==0){
	prinft("Enhorabuena Jugador 1, Has ganado\n\n");
	}
	else if (j==1){
	prinft("Enhorabuena Jugador 2, Has ganado\n\n");
	}else{
	prinft("Empate!!\n\n");

	}*/
}

void insert_first (char matriz[N][N]){
	int x, y;
	int posiciones;
	posiciones = '1';
	for (x=0; x<N; x++){
		for (y=0; y<N; y++){
			matriz[x][y] = posiciones++;
		}
	}

}

void insert_values_J1 (char matriz[N][N]){
	char aux = 0;
	int x,y,k;
	do{
		do{
			printf("Jugador 1 coloque una ficha: ");
			fflush(stdin);
			scanf("%c", &aux);
		} while (aux <'1' || aux >'9');

		switch(aux){
			case '1': {
				x=0;
				y=0;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}

			case '2': {
				x=0;
				y=1;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}

			case '3': {
				x=0;
				y=2;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}

			case '4': {
				x=1;
				y=0;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}
			case '5': {
				x=1;
				y=1;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}
			case '6': {
				x=1;
				y=2;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}
			case '7': {
				x=2;
				y=0;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}
			case '8': {
				x=2;
				y=1;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}
			case '9': {
				x=2;
				y=2;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}
		}

	}while (k == 1);
	matriz[x][y]='X';
}


void insert_values_J2 (char matriz[N][N]){
	char aux2;
	int x,y,k;
	do{
		do{
			printf("Jugador 2, Coloque una ficha: ");
			fflush(stdin);
			scanf("%c", &aux2);
		}while (aux2 <'1' || aux2 > '9');

		switch(aux2){
			case '1': {
				x=0;
				y=0;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}

			case '2': {
				x=0;
				y=1;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}

			case '3': {
				x=0;
				y=2;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}

			case '4': {
				x=1;
				y=0;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}
			case '5': {
				x=1;
				y=1;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}
			case '6': {
				x=1;
				y=2;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}
			case '7': {
				x=2;
				y=0;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}
			case '8': {
				x=2;
				y=1;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}
			case '9': {
				x=2;
				y=2;
				if (matriz[x][y] == 'X' || matriz[x][y] == 'O'){
				k = 0;
				printf("Posición ocupada \n\n");
				}
				break;
			}
		}

	}while (k == 1);
	matriz[x][y]='O';
}


void tablero (char matriz[N][N]){
	int x, y;
	for (x=0; x<N; x++){
		for (y=0; y<N; y++){
			printf(" %c", matriz[x][y]);
		}
		printf("\n");
	}
}
/*
int ganador (char c[N][N]){
	if (matriz[0][0] == 'X' || matriz[0][0]='O'){
		if (matriz[0][0] == matriz[0][1] ){
		}
	}
}*/
