#include <stdio.h>

void ingresarDatos();
void procesarProductos();
void imprimirDatos();


int cantidad, contador;
float precioUnit, precioTotal, precioProductos;
char descripcion [50];
char continuacion;

int main (){
	
	ingresarDatos();
 	procesarProductos();
	imprimirDatos();
	return 0;
}

void ingresarDatos(){
	printf ("\nDesea ingresar un producto?\n");
	fflush (stdin);
	scanf ("%c", &continuacion);
	
	if (continuacion == 's' || continuacion == 'S'){
	
	printf ("\nIngrese cantidad del producto\n");
	fflush (stdin);
	scanf ("%d", &cantidad);
	
	printf ("\nIngrese precio del producto: \n");
	fflush(stdin);
	scanf ("%f", &precioUnit);
	
	printf ("\nIngrese descripcion del producto: \n");
	fflush (stdin);
	scanf ("%[^\n]s", &descripcion);
	
	}
}
void procesarProductos(){
	
	while(continuacion == 's' || continuacion == 'S'){
	precioProductos= (float)cantidad*precioUnit;
	precioTotal=precioTotal+precioProductos;
	ingresarDatos();
}
}
void imprimirDatos (){
	printf ("\n*************************************\n");
	printf ("\nTOTAL A PAGAR: $ %.2f\n", precioTotal);
	printf ("\n*************************************\n");
	printf("\n¡GRACIAS POR SU COMPRA!\n");
}
