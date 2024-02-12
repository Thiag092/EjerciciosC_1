#include <stdio.h>
#include <stdbool.h>
void inicializarVariables();
void ingresarDatos();
void procesarDatos();
void calcular_Sinbano_SinCocina();
void calcularPorcentaje();
void imprimirResultados();

int tipoViv, habitantes, dormitorios, banos, contadorTotal, contadorSinBano;
bool cocina;
float porcentaje;
char ingresoSN;

int main (){
	inicializarVariables();
	ingresarDatos();
	procesarDatos();
	imprimirResultados();
	
	return 0;
}
void inicializarVariables(){
	contadorTotal=0;
	contadorSinBano=0;
}
void ingresarDatos(){
    printf ("\nDesea ingresar datos sobre alguna vivienda? (S/N): \n");
    fflush (stdin);
    scanf ("%c", &ingresoSN);
    
    if (ingresoSN == 's' || ingresoSN == 'S'){
    
    printf ("\nIngrese codigo de tipo de vivienda (1-casa 2-rancho 3-casilla 4-departamento): \n");
    fflush (stdin);
    scanf ("%c", &tipoViv);
    
    printf ("\nIngrese cantidad de personas que habian la vivienda: \n");
    fflush (stdin);
    scanf ("%d", &habitantes);
    
    printf ("\nIngrese la cantidad de dormitorios de la vivienda:\n");
    fflush (stdin);
    scanf ("%d", &dormitorios);
    if (dormitorios/habitantes < 0.4){
    	printf ("***Viviendas con posible hacinamiento***");
    }
    
    printf ("\nIngrese cantidad de banos de la vivienda: \n");
    fflush (stdin);
    scanf ("%d", &banos);
    
    printf ("\nLa vivienda dispone de cocina completa? (1-Si/0-No): \n");
    fflush (stdin);
    scanf ("%d", &cocina);
	}
}

void procesarDatos(){
	while (ingresoSN == 's' || ingresoSN == 'S' ){
		contadorTotal = contadorTotal+1;
		calcular_Sinbano_SinCocina();
		calcularPorcentaje();
		ingresarDatos();
	}
}
void calcular_Sinbano_SinCocina(){
	if (banos == 0 && cocina == 0){
		contadorSinBano = contadorSinBano+1;
		
	}
}
void calcularPorcentaje (){
	porcentaje= (float) contadorSinBano *100 / contadorTotal;
}
void imprimirResultados (){
    printf ("\nCantidad total de viviendas censadas: %i\n", contadorTotal);
    printf("\n------------------------------------------\n");
    
    printf ("\nCantidad de viviendas que no tienen cocina completa ni baño: %i\n", contadorSinBano);
    printf("\n------------------------------------------\n");
    
    printf ("\nPorcentaje que representa a las viviendas que no tienen cocina completa ni baño: %2.f %%\n", porcentaje);
    printf("\n------------------------------------------\n");
}

