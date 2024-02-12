/* a)	Dise�e un algoritmo que emita el ticket con el importe a pagar en un 
		supermercado considerando los datos: cantidad y precio del producto. 
		Imprimir el ticket tomando como referencia el dise�o de este ticket de ejemplo */

#include <stdio.h>
		
/* Declaraci�n de prototipos de funciones */
void ingresarDatos();
void calcularTotal();
void imprimirResultados();

/* Declaraci�n de variables globales */
float precioUnitario, totalPagar,bonif;
int cantidad;	
char formaDePago;

int main() {	
	ingresarDatos();
	calcularTotal();
	imprimirResultados();
	return 0;
}

/* Implementaci�n de funciones */
void ingresarDatos() {
	printf("Ingrese el precio unitario: ");
	scanf("%f", &precioUnitario);
	fflush(stdin);
	printf("Ingrese la cantidad: ");
	scanf("%d", &cantidad);
	fflush(stdin);
	printf("Ingrese forma de pago (c-tarjeta de cr�dito / d-tarjeta de d�bito / e-efectivo): ");
	scanf("%c", &formaDePago);
	fflush(stdin);
}

void calcularTotal() {
	totalPagar = precioUnitario * cantidad;
	
	
	if (totalPagar >= 5000 && formaDePago == 'e') {
		bonif = totalPagar * 10 / 100;
	}
		totalPagar = totalPagar - bonif;  
		
}

void imprimirResultados() {
	printf("\n-------------------------------------------\n");
	printf("\nCant. unidades: %d - Precio unit.: $ %.2f\n", cantidad, precioUnitario);
	printf ("Forma de pago :%c\n", formaDePago);
	printf ("Bonificacion: $ %.2f\n", bonif);
	printf("Total: %.2f", totalPagar);		
	printf("\nGracias por su compra!\n");
	printf("\n-------------------------------------------\n");
}


