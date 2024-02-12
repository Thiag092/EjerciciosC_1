#include <stdio.h>

void ingresarDatos ();
void sumarProductos();
void imprimirTicket();

float precio, total, subTotal;
int cantidad;

int main (){

	 ingresarDatos ();
	 sumarProductos();
	 imprimirTicket();
	
	return 0;
}
/*
void ingresarDatos (){
	
	printf ("Ingrese precio unitario del producto: ");
	scanf ("%f", &precio);
	
	printf ("Ingrese cantidad del producto: ");
	scanf ("%i", &cantidad);
	
	subTotal = precio*cantidad;
	
}*/

void sumarProductos (){
	while (cantidad == -1){
		
		printf ("Ingrese precio unitario del producto: ");
	scanf ("%f", &precio);
	
	printf ("Ingrese cantidad del producto: ");
	scanf ("%i", &cantidad);
	
	subTotal = precio*cantidad;
		
	}
	
	
	
}

void imprimirTicket (){
}
