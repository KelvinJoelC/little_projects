#include <stdio.h>
#include <stdlib.h>
 
 int main(){
	/* Defino las variables*/
	int op1, op2, op3, ascii;
	char string[50];
	char ban, letra, l;
	char m[20],s[50];

		ban = 's';
		while (ban !='n')
	printf("Ingresa un caracter: ");
	scanf("%c", &letra); getchar(); 
	printf("\n");
	printf("El caracter %c", letra);
	ascii = letra;
	printf(" tiene codigo ascii: %d\n\n", ascii);

	printf("Ingresa el numero ascii: ");
	scanf("%d", &a); getchar(); 
	printf("\n");
	printf("El codigo ascii %d", a);
	l = toascii(a);
	printf(" tiene el caracter: %c\n\n",


 	return EXIT_SUCCESS;
 }
