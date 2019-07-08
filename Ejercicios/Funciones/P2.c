#include <stdio.h>
int calcularProgresionGeometrica(int x, int n);

int main() {
    int x;
    int n;
    printf("Ingrese el valor de x: \n");
    scanf("%d", &x);
    printf("Ingrese el valor de n: \n");
    scanf("%d", &n);
    printf("La suma de la progresion geometrica es: %d", calcularProgresionGeometrica(x, n));
    scanf("%d", &x);
}
    
int calcularProgresionGeometrica(x, n){
    int resultado = 0;
    for(int i = 0; i <= n; i++ ){
       resultado += pow (x, i);
    }
    return resultado;
}