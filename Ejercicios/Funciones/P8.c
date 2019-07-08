#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int caraSello();

int main (void)
{
	printf("Escrba el numero de veces que desea lanzar la moneda,\nIngrese 0 si quiere salir del programa\n");
    int salir = 1;
    while(salir == 1){
        srand(time(NULL));
        int nLanzamientos;
        int cara = 0;
        int sello = 0;
        scanf("%d",&nLanzamientos);
        if(nLanzamientos == 0){
            salir = 0;
        }
        char secuencia[nLanzamientos];
        if(caraSello() == 1){
            cara += 1;
            strcpy(secuencia, "C");
        }
        else{
            sello += 1;
            strcpy(secuencia, "S");
        }
        for(int i = 0; i < nLanzamientos-1; i++){
            if(caraSello() == 1){
                cara += 1;
                strcat(secuencia, "C");
            }
            else{
                sello += 1;
                strcat(secuencia, "S");
            }
        }
        printf("%s \nNumero de caras = %d; Numero de sellos = %d\n", secuencia, cara, sello);
    }
    
}

int caraSello(){
    return rand()%2;
}