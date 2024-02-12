#include <stdio.h>


void inicializarVariables();
void ingresarDatos();
void imprimirResultados();

float costoBase = 800;
char procedencia, tipoParticipante;
float bonificacionDoc = costoBase * 15 / 100, bonificacionEst = costoBase *50/100;


int main (){
	
	inicializarVariables();
	ingresarDatos();
	imprimirResultados();
	
	return 0;
}

void inicializarVariables(){
}

void ingresarDatos(){
	printf ("Ingrese lugar de Procedencia (C-Capital, I-Interior) :\n");
	scanf ("%c", &procedencia);
	fflush (stdin);
	
	printf ("\nIngrese tipo de participante (1-Docente, 2-Estudiante, 3-Profesional) :\n");
	scanf ("%c", &tipoParticipante);
	

}

void imprimirResultados(){
	
	
}
