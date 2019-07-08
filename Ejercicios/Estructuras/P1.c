#include <stdio.h>
float calcularLaComision(int ventas);

int main (void)
{
    int ventas;
    printf("Que valor tuvo la venta: \n");
    scanf("%d",&ventas);
    printf("La Comision es de:\n %f",calcularLaComision(ventas));
}

float calcularLaComision(int ventas){
    float comision;
    if (ventas < 20001 ){
        
        comision = ventas * 0.05;
        
    }else if (ventas < 50001){
    
        comision = (ventas * 0.07) + 1000;
        
    }else if (ventas > 50000){
    
        comision = (ventas * 0.1) + 3100;
    }    
    if(comision < 0){
    
        return 0;      
    }
    return comision;
}