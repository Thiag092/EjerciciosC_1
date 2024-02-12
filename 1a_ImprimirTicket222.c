/* a)	Diseñe un algoritmo que emita el ticket con el importe a pagar en un 
		supermercado considerando los datos: cantidad y precio del producto. 
		Imprimir el ticket tomando como referencia el diseño de este ticket de ejemplo */

#include <stdio.h>
		
/* Declaración de prototipos de funciones */
void ingresarDatos();
void calcularTotal();
void imprimirResultados();

/* Declaración de variables globales */
float precioUnitario, totalPagar,bonif;
int cantidad;	
char formaDePago;

int main() {	
	ingresarDatos();
	calcularTotal();
	imprimirResultados();
	return 0;
}

/* Implementación de funciones */
void ingresarDatos() {
	printf("Ingrese el precio unitario: ");
	scanf("%f", &precioUnitario);
	fflush(stdin);
	printf("Ingrese la cantidad: ");
	scanf("%d", &cantidad);
	fflush(stdin);
	printf("Ingrese forma de pago (c-tarjeta de crédito / d-tarjeta de débito / e-efectivo): ");
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


