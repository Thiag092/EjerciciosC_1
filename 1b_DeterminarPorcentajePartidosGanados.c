/* b)	Diseñe un algoritmo para calcular y mostrar el porcentaje de partidos de 
		fútbol ganados por un club en un campeonato, conociendo los datos: 
		cantidad de partidos jugados y cantidad de partidos ganados por el club. */

#include <stdio.h>

/*	Declaración de prototipos */
void ingresarDatos();
void mostrarPorcentajePartidosGanados();
	
/*	Declaración de variables globales */
int cantPartidosJugados;
int cantPartidosGanados;

int main() {	
	ingresarDatos();
	mostrarPorcentajePartidosGanados();
	return 0;
}

void ingresarDatos() {
	printf("Ingresar cantidad de partidos jugados: ");
	scanf("%d", &cantPartidosJugados);
	
	printf("Ingresar cantidad de partidos ganados por el club: ");
	scanf("%d", &cantPartidosGanados);
	
	
}

void mostrarPorcentajePartidosGanados() {
	int i;
	printf("\n----------------------------------------------------");
	printf("\nPorcentaje de partidos ganados por el club: %.2f %%\n", (( float )cantPartidosGanados/cantPartidosJugados * 100 ) );
}
	

