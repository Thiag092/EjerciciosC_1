#include <stdio.h>
int numeroSocio, contadorSala, totalLibros, contador;
 float porcentaje, librosDomicilio;
 char tituloLibro[50];
 char tipoPrestamo, consulta;
 
int main (){
	
	printf ("\nIngrese numero de socio: \n");
	fflush (stdin);
	scanf ("%d", &numeroSocio);
	
	printf ("\n Ingrese titulo de la obra: \n");
	fflush (stdin);
	scanf ("%[^]s", &tituloLibro);
	
	printf ("\nIngrese tipo de prestamo (1-Lectura en sala; 2-Lee en domicilio\n");
	fflush (stdin);
	scanf("%c", &tipoPrestamo);
	
	if (tipoPrestamo == '2'){
		printf ("El socio %i, LLEVA A DOMICILIO el titulo %s", numeroSocio, tituloLibro );
	}
	return 0;
}
