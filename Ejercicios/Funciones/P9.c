#include <stdio.h>
#include <stdlib.h>
#include <time.h> //time()
int multiplicacionDinamica(int numero, int numero2);

int main() {
    int Max = 9;
    int min = 1;
    srand(time(NULL));
    int numero = rand() %Max + min;
    int numero2 = rand() %Max+ min;
    
    multiplicacionDinamica(numero, numero2);
    
    return 0;
}

int multiplicacionDinamica(numero, numero2){
    int Max = 9;
    int min = 1;
    srand(time(NULL));
    int num = rand() %Max + min;
    int num2 = rand() %Max+ min;
    
    int respuesta;
    int respuestaUsuario;
    printf("Cuanto es %d veces %d \n", numero, numero2);
    printf("Preciona 0(cero) para salir");
    printf("\n");
    scanf("%d",&respuestaUsuario);
    respuesta = numero * numero2;
    
    if (respuestaUsuario == respuesta ){
        
        printf("Muy bien! \n");
        multiplicacionDinamica(num, num2);
        
    }else if(respuestaUsuario == 0){
        
        printf("Gracias por Participar");
        return 0;
        
    }else{
        printf("No, Por favor intenta nuevamente");
        printf("\n");
        multiplicacionDinamica(numero, numero2);
    }
    
    return 0;
}