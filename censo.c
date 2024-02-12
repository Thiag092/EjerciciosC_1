#include <stdio.h>
void inicializarVariables();
void ingresarDatos();
void calcularTotal();
/*void viv_Sin_B_C();*/
void calcularHacinamiento();
void imprimirResultados();

int tipoViv, cocina, ingresoSN;
int habitantes, dormitorios, cantidadBanos, totalCensadas, viviendas, noCocinaNiBano;
float porcentaje;

int main() {
    inicializarVariables();
    ingresarDatos();
    calcularTotal();
   /* viv_Sin_B_C();*/
    /*calcularHacinamiento();*/
    imprimirResultados();
    return 0;
}
void inicializarVariables(){
    ingresoSN = 0;
    tipoViv = 0;
    cocina = 0;
    habitantes = 0;
    dormitorios = 0;
    cantidadBanos = 0;
    viviendas =0;
    totalCensadas=0;
    porcentaje = 0;
    noCocinaNiBano =0;
}

void ingresarDatos(){
    printf ("Desea ingresar datos sobre alguna vivienda?:");
    fflush (stdin);
    scanf ("%c", &ingresoSN);
    
    if (ingresoSN != 'n' || ingresoSN != 'N'){
    
    printf ("\nIngrese codigo de tipo de vivienda: \n");
    fflush (stdin);
    scanf ("%c", &tipoViv);
    
    printf ("\nIngrese cantidad de personas qe habian la vivienda: \n");
    fflush (stdin);
    scanf ("%i", &habitantes);
    
    printf ("\nIngrese la cantidad de dormitorios de la vivienda:\n");
    fflush (stdin);
    scanf ("%i", &dormitorios);
    
    printf ("\nIngrese cantidad de banos de la vivienda: \n");
    fflush (stdin);
    scanf ("%i", &dormitorios);
    
    printf ("\nLa vivienda dispone de cocina completa?: \n");
    fflush (stdin);
    scanf ("%c", &cocina);}
}

void calcularTotal (){
    while (ingresoSN != 'n' || ingresoSN != 'N'){
        viviendas ++;
        totalCensadas = totalCensadas + viviendas;
    }
}
void imprimirResultados (){
    printf ("\nCantidad total de viviendas censadas: %i\n", totalCensadas);
    printf("\n------------------------------------------\n");
    
    printf ("\nCantidad de viviendas que no tienen cocina completa ni baño: %i\n", noCocinaNiBano);
    printf("\n------------------------------------------\n");
    
    printf ("\nPorcentaje que representa a las viviendas que no tienen cocina completa ni baño: %2.f\n", porcentaje);
    printf("\n------------------------------------------\n");
}

