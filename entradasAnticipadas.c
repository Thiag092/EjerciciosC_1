# include <stdio.h>
void ingresarDatos ();
void calcularImporteConsumicion ();
void calcularImporteAnticipada();
void imprimirResultados();

float precio, descuento;
int consumicion;
char anticipada;

int main () {
	ingresarDatos();
	calcularImporteConsumicion ();
	calcularImporteAnticipada();
	imprimirResultados();
	return 0;
}
void ingresarDatos (){
	printf("Desea una entrada con consumicion?\n");
	scanf ("%i", &consumicion);
	printf("Desea comprar de manera anticipada?\n");
	fflush(stdin);	
	scanf ("%c", &anticipada);
	
}
void calcularImporteConsumicion (){
	if (consumicion == 1){
		precio = 750;
		
	} else{
		precio = 500;
	}	
}	

void calcularImporteAnticipada(){
	descuento = precio * 20 / 100;
	if (anticipada == 's' || anticipada == 'S')
	{
		precio = precio - descuento;
	} 
}
	
void imprimirResultados(){
	
	printf ("\n-----------------------------------------------------\n");
	printf ("\nPrecio de la entrada: %.2f\n", precio);
	printf ("\nCaracter de la entrada %c\n", anticipada);
	
	
}


