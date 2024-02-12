#include <stdio.h>

void ingresarDatos();
void procesarDatos();
void contarTotal();
void contartotalGripe();
void contarTotalMayores();
void porcentajeMayores();
void imprimirResultados();

int tipoVacuna, numeroDosis, edad, totalMayores, totalGripe, totalVacunados;
float porcentaje;
char consulta;

int main (){
	
	ingresarDatos();
 	procesarDatos();
 	imprimirResultados();
 	
 	return 0;
}
void ingresarDatos (){

	printf ("\nDesea ingresar un nuevo paciente?\n");
	fflush (stdin);
	scanf ("%C", &consulta);
	
	if (consulta == 's'|| consulta == 'S' ){
		
		printf ("\ningrese edad\n");
		fflush (stdin);
		scanf ("%d", &edad);
		
		printf ("\nIngrese tipo de vacuna (1-covid/2-gripe)\n");
		fflush (stdin);
		scanf("%d", &tipoVacuna);
		
		printf ("\ningrese numero de dosis\n");
		fflush (stdin);
		scanf ("%d", &numeroDosis);
	}

	}
	
void procesarDatos(){
	
	while (consulta == 's'|| consulta == 'S' ){
	
	contarTotal();
 	contartotalGripe();
 	contarTotalMayores();
 	porcentajeMayores();
 	ingresarDatos();
}
}
void contarTotal(){
	totalVacunados = totalVacunados +1;
}
void contartotalGripe(){
	if (tipoVacuna == 2){
		totalGripe=totalGripe +1;
	}
}
void contarTotalMayores(){
	if (edad >65){
		totalMayores = totalMayores +1;
	}
}
void porcentajeMayores(){
	porcentaje = (float)totalGripe * 100 / totalVacunados;
}
void imprimirResultados(){
	printf ("\nEl total de gente vacunada es de: %d\n", totalVacunados);
	printf ("\n------------------------------------------------------");
	printf ("\nEl total de vacunados para la gripe es de:  %d\n", totalGripe);
	printf ("\n------------------------------------------------------\n");
	printf ("\nEl porcentaje de adultos mayores vacunados sobre el total es de: %%%.2f\n", porcentaje);
	
}
