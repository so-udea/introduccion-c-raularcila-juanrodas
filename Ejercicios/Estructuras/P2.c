#include <stdio.h>

int main (void)
{
    int fn;
    printf ("Numero final (empezando de 1): ");
    scanf("%d", &fn);
    printf("\nTabla de multiplicacion desde 1 hasta %d :\n",fn);
    
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= fn; j++){
            
            printf("%dx%d = %d, ",i,j,i*j);
        }
        printf("\n");
    }
    scanf("%d",&fn);
}