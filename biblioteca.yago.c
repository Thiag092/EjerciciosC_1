#include <stdio.h>
 
 void inicializarVariables();
 void ingresarDatos();
 void procesarDatos();
 void imprimirPrestamo();
 void contadorLibrosSala();
 void contadorTotal();
 void porcentajeSala();
 void imprimirResultados();
 
 int numeroSocio, contadorSala, totalLibros, contador;
 float porcentaje, librosDomicilio;
 char tituloLibro[50];
 int tipoPrestamo;

 
int main (){
	
	inicializarVariables();
	ingresarDatos();
	procesarDatos();
	imprimirResultados();
	return 0;
}

void inicializarVariables(){
	contador = 0;
	totalLibros = 0;
	porcentaje = 0;
}
void ingresarDatos(){
	printf ("\nIngrese numero de socio (o presione -9 para finalizar): \n");
	scanf ("%d", &numeroSocio);
	
	if (numeroSocio != -9){
		
	printf ("\n Ingrese titulo de la obra: \n");
	fflush (stdin);
	scanf ("%[^\n]s", &tituloLibro);
	
	printf ("\nIngrese tipo de prestamo (1-Lectura en sala; 2-Lee en domicilio\n");
	fflush (stdin);
	scanf("%i", &tipoPrestamo);
	}
	
	
	
}
void procesarDatos(){
	while (numeroSocio != -9){
		
		contadorLibrosSala();
		imprimirPrestamo();
		contadorTotal();
		porcentajeSala();
		ingresarDatos();
	}
}
void contadorLibrosSala (){
	if (tipoPrestamo ==1){

	contadorSala = contadorSala+1;
	}
}
void imprimirPrestamo (){
	if (tipoPrestamo == 2){
		printf ("El socio %i, LLEVA A DOMICILIO el titulo %s%", numeroSocio, tituloLibro );
	}
}

void contadorTotal(){
	totalLibros=totalLibros ++;
	
}
void porcentajeSala(){
	porcentaje= (float)contadorSala*100/totalLibros;
}
void imprimirResultados(){
	printf("\nLa cantidad de libros prestados para leer en sala son: %i\n", contadorSala),
	printf ("\n---------------------------------------------------\n");
	printf ("\nPorcentaje de libros leidos en sala con respecto al total: %.2f %%\n", porcentaje);
	printf ("\n---------------------------------------------------\n");
	
}
