/* Probar ingreso de caracteres	 */
#include <stdio.h>

/* Declaración de prototipos */
void ingresarVariables();
void mostrarVariables();

/* Declaración de variables globales */
char caracter_1;
char caracter_2;
char caracter_3;
char caracter_4;

int main() {
	ingresarVariables();
	mostrarVariables();
	return 0;
}

void ingresarVariables() {
	printf("Ingrese caracter 1: " );
	scanf("%c", &caracter_1);
	printf("Ingrese caracter 2: " );
	fflush(stdin);
	scanf("%c", &caracter_2);
	printf("Ingrese caracter 3: " );
	fflush(stdin);
	scanf("%c", &caracter_3);
	printf("Ingrese caracter 4: " );
	fflush(stdin);
	scanf("%c", &caracter_4);
}

void mostrarVariables() {
	printf("\nValores ingresados: %c, %c, %c, %c ", caracter_1, caracter_2, caracter_3, caracter_4);
}

/*fflush(stdin);*/

