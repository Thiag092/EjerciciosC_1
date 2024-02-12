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
    
    printf("Ingrese tipo de producto (P, F o L (P-Perfumería, F-Farmacia y L-Limpieza): ");
    fflush(stdin);
    scanf("%c", &tipoProducto);
    
    
    switch (tipoProducto){
        
        case 'P': bonificacion = importePagar * 5 / 100;
        break;
        case 'p': bonificacion = importePagar * 5 / 100;
        break;
        
        case 'F': bonificacion = importePagar * 10 / 100;
        break;
        case 'f': bonificacion = importePagar * 10 / 100;
        break;
        
        case 'L': bonificacion = importePagar * 15 / 100;
        break;
        case 'l': bonificacion = importePagar * 15 / 100;
        break;
        
        default: printf ("\nLa letra ingresada no pertenece a ningun producto\n");
    }
}

void imprimirTicket(){
    printf("\n-------------------------------------------\n");
    printf("\nPrecio total: %.2f\n", importePagar);
    printf("\nBonificacion: %.2f\n", bonificacion);
    printf ("\nEl importe total a pagar es de : $%.2f\n", (importePagar - bonificacion));
    printf("\n-------------------------------------------\n");
}
