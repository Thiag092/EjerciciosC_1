# include <stdio.h>

void ingresarDatos();
void acumulador();


int numeroDni, edad, provincia;
char sexo, categoria;

int main (){
	
	ingresarDatos();
	acumulador();
	
	
	return 0;
}

void ingresarDatos (){
	printf ("Ingrese numero de DNI del participante: ");
	scanf ("%i", &numeroDni);
	
	printf ("Ingrese edad del particpante: ");
	scanf ("%i", &edad);
	
	printf("Ingrese sexo del participante (M/F: ");
	scanf ("%c", &sexo);
	
	printf("Ingrese categoria: ");
	scanf ("%c", &categoria);
	
	printf ("Ingrese provincia de origen: ");
	scanf ("%i", &provincia);
	
	
}

void acumulador (){
}
