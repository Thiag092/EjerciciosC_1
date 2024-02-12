#include <stdio.h>

void ingresarDatos();
void calcularVarones();
void procesarDatos ();
void imprimirDatos();

long dni, contador;
int edad, provincia;
char categoria, sexo, pregunta;

int main (){
	ingresarDatos();
	
 	procesarDatos ();
	 imprimirDatos();
	 return 0;
}

void ingresarDatos(){
	
	printf ("\nDesea ingresar un nuevo participante?\n");
	fflush (stdin);
	scanf ("%c", &pregunta);
	
	if (pregunta == 's' || pregunta == 'S'){
		
	printf ("\nFavor de ingresar DNI del participante: \n");
	fflush (stdin);
	scanf ("%l", &dni);
	
	printf ("\nIngresar sexo del participante: \n");
	fflush (stdin);
	scanf ("%c", &sexo);
	
	printf ("Ingrese edad del participante: \n");
	fflush (stdin);
	scanf ("%d", &edad);
	
	printf ("\nIngrese categoria (N-niños, C-cadetes): \n");
	fflush (stdin);
	scanf ("%c", &categoria);
	
	printf ("\nIngrese provincia de origen del participante: \n");
	fflush (stdin);
	scanf ("%d", &provincia);
}
}
void calcularVarones(){
	if (sexo == 'M' || sexo == 'm' && edad >=10 && edad<=12){
		contador = contador+1;
}
}
void procesarDatos (){
	
	while (pregunta == 's' || pregunta == 'S'){
		calcularVarones();
		ingresarDatos();
}
}


void imprimirDatos (){
	printf ("\nLa cantidad de varones de entre 10 y 12 años inscriptos es: %d \n", contador);
	printf ("\n----------------------------------------------------\n");
	
	
	
}
