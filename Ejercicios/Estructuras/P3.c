#include <stdio.h>

int main (void)
{
    int renglones;
    int binario; 
    int flag;
    printf("Ingrece numero de renglones: ");
    scanf("%d",&renglones);
    binario = 1;
    flag = binario;
    
    for(int i = 1; i <= renglones; i++){
         printf("\n"); 
        for(int j = 1; j <= i; j++){
            printf("%d",binario);
            if (binario == 1){
                binario = 0;
            }
            else{
                binario = 1;
            }
        }
        
        if (flag == 1){
            flag = 0;
        }
        else{
            flag = 1;
        }
        binario = flag; 
    }
    scanf("%d",&renglones);
}