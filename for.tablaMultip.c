


int main()
{
	int i =0;
    int multiplicador;
    int numero;
    int resultado;
    
    printf ("Ingrese numero :");
    scanf ("%i", &numero);
    
     for (multiplicador=0; multiplicador<= 10; multiplicador++)
    { 
	
	resultado = numero * multiplicador;
	printf("\n%i x %i : %i\n",numero, multiplicador, resultado);
	

    }
    
    return 0;
}
