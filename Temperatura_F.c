#include <stdio.h>

void ingresarDatos ();
void calcularResultados();
void imprimirResultados ();

int temperatura;



int main()
{
    ingresarDatos ();
    calcularResultados();
    
    return 0;
}

void ingresarDatos (){
    
    printf ("Ingrese temperatura máxima: ");
    scanf ("%i", &temperatura);
}

void calcularResultados (){
    
    if (temperatura < 10) {
    printf ("Mucho frio");
    } else {
        if (temperatura >=10 && temperatura< 15){
            printf("Poco frio");
        } else {
            if (temperatura >=15 && temperatura <25){
                printf ("Temperatura normal");
            } else {
                if (temperatura >=25 && temperatura<30){
                printf ("Poco calor");
                } else {
                    if (temperatura >=30 && temperatura <=45){
                        printf ("Mucho calor");
                    }
                    }
                }
            }
            }
            
        }
    

    
    
    
