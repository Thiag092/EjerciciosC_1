#include <stdio.h>


void inicializarVariables();
void ingresarDatos();
void procesarDatos();
void calcularPorcentajeRes();
void imprimirResul();

int numeroUs;
char categoria;
char finalizar;
float importeUsuario;
float subImporte=0;
float porcentaje;

int main (){
	
 	ingresarDatos();
 	procesarDatos();
	calcularPorcentajeRes();
	imprimirResul();
	return 0;
}


void ingresarDatos(){
	printf ("Desea agregar datos de usuario?\n");
	fflush (stdin);
	scanf ("%c", &finalizar);
	
	if (finalizar != 'n'){
	
	printf ("\nIngrese numero de usuario: \n");
	fflush (stdin);
	scanf ("&i", &numeroUs);
	
	printf ("\nIngrese categoria de usuario: \n");
	fflush (stdin);
	scanf("%c", &categoria);
	
	printf ("\nIngrese importe facturado por el usuario\n");
	fflush(stdin);
	scanf("%2.f", &importeUsuario);
} 
	else {printf ("Gracias por utilizar el servicio, que tenga un buen dia\n");
}
}
void procesarDatos(){
	while (finalizar != 'n'){
		calcularPorcentajeRes();
		ingresarDatos();
	}
}
void calcularPorcentajeRes (){
	if (categoria == 1){
		subImporte = subImporte + importeUsuario;
		
	}
	porcentaje = subImporte*3/100;
}
void imprimirResul(){
	printf ("El porcentaje perteneciente a la categoria Residencial es: %2.f", porcentaje);
}
