
#include <stdio.h>

void ingresoDeDatos ();
void calculoDePorcentaje();

int partidosJugados, partidosGanados;

int main () {
	
	 ingresoDeDatos ();
	 calculoDePorcentaje();
	
	return 0;
}

void ingresoDeDatos () {
	
	printf ("Ingrese la cantidad de partidos jugados en la temporada: ");
	scanf ("%i", &partidosJugados);
	printf ("Ingrese la cantidad de partidos ganados en la temporada: ");
	scanf ("%i", &partidosGanados);
}

void calculoDePorcentaje (){
	
	int	porcentaje = partidosGanados * 100 / partidosJugados;
	printf ("El porcentaje de partidos ganados es de : %i ", porcentaje);
	
}
