#include <stdio.h>
void ingresarDatos();
void calcularImporte();
void gestionarProductos();
void imprimirTicket();

int cantidad;
float precioU, total, subTotal;


int main (){
	
	ingresarDatos();
	gestionarProductos();
	calcularImporte();
	imprimirTicket();
	return 0;
}

void ingresarDatos(){
	printf ("Ingrese cantidad del producto: ");
	scanf ("%i", &cantidad);
	
	if (cantidad != -1){
	printf ("Ingrese precio Unitario del producto: ");
	fflush (stdin);
	scanf ("%f", &precioU);
	
}
}

void gestionarProductos(){
	while (cantidad > -1){
		
		calcularImporte();
		printf ("\n El sub total es: $%2.f\n", subTotal);
		ingresarDatos();
		
		
	}
}
void calcularImporte(){
		subTotal = cantidad*precioU;
		total =  total + subTotal;
	}

void imprimirTicket (){

	printf ("El total es: $%.2f", total);
	

}
