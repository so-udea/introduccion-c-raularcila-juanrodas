#include <stdio.h>
int multiplo(int primero, int segundo);

int main() {
    int parejas;
    printf("Ingrese el total de pares: ");
    scanf("%d", &parejas);
    int PrimerosN[parejas];
    int SegundosN[parejas];
    printf("\nIngrese el par de numeros de uno en uno.\n");
    int numeroPareja = 1; 
    
    for (int i = 0 ; i < (2*parejas); ++i) {
        if (i%2 == 0)
        {
            printf("\nEl primer numero de la pareja #%d: ", numeroPareja);
            scanf("%d", &PrimerosN[numeroPareja]);
        }
        else
        {
            printf("El segundo numero de la pareja #%d: ", numeroPareja);
            scanf("%d", &SegundosN[numeroPareja]);
            numeroPareja++;
        }
        
    }
    printf("\n");
    for (int i = 1; i <= parejas; i++){
        printf("El resultado de la pareja %d es : %d\n", i, multiplo(PrimerosN[i], SegundosN[i]));
    }
	scanf("%d", &parejas);
}
    

int multiplo(primero, segundo){
    int resultado = 1;
    
    if (segundo % primero == 0 )
        resultado = 1;
    else
        resultado = 0;
    
    return resultado;
}