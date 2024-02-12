#include <stdio.h>

void ingresarDatos();
void calcularImporte();
void calcularBonificacion();
void imprimirTicket();

float precio, bonificacion, importePagar, importeFinal, cantidad;
char tipoProducto;

int main (){
    ingresarDatos();
    calcularImporte();
    calcularBonificacion();
    imprimirTicket();
    
    return 0;
}

void ingresarDatos(){
    printf ("Ingrese cantidad de compra: ");
    scanf("%f", &cantidad);
    printf("Ingrese precio del producto: ");
    scanf("%f", &precio);
}

void calcularImporte(){
    importePagar = cantidad * precio;
}

void calcularBonificacion(){
    
    printf("Ingrese tipo de producto: ");
    fflush(stdin);
    scanf("%c", &tipoProducto);
    
    
    switch (tipoProducto){
        
        case 'P' || 'p': importeFinal = importePagar * 5 / 100;
        break;
        
        case 'F': importeFinal = importePagar * 10 / 100;
        break;
        
        case 'L': importeFinal = importePagar * 15 / 100;
        break;
        
        default: printf ("La letra ingresada no pertenece a ningun producto: \n");
    }
}

void imprimirTicket(){
    
    printf ("%f", importeFinal);
    
}
