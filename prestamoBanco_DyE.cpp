#include <stdio.h>

void ingresarDatos ();
void evaluarDatos();


float sueldo;
float porcentajeAutorizado;

int main (){
	
	ingresarDatos();
	evaluarDatos();
	return 0;
}

void ingresarDatos ()  {
	
	printf ("Ingrese monto del sueldo: ");
	scanf ("%f", &sueldo);
	
}

void evaluarDatos (){
	porcentajeAutorizado = sueldo * 75 / 100;
	if (sueldo >= 100000) {
		
		printf ("De acuerdo al monto ingresado, se le autoriza un credito por hasta $300000");
	} else {
		
		printf ("De acuerdo a al monto ingresado, se le autoriza un credito por : %.2f", porcentajeAutorizado);
		
	}
	
}
