#include <stdio.h>
int factorial(int numero);
float sumatoria(int x, int nTerminos);

int main() {
    int x;
    int nTerminos;
    
    printf("Valor de entrada de x: ");
	scanf("%d", &x);
	
	printf("\nNumero de terminos: ");
	scanf("%d", &nTerminos);
	
	printf("\nSuma: %f", sumatoria(x, nTerminos));
	scanf("%d", &x);
}

float sumatoria(x, nTerminos){
    int signo = -1;
	float sumatoria = 1;
	for(int i = 1; i < nTerminos; i++){
	    sumatoria = sumatoria + signo*((pow(x ,i*2))/factorial(i*2));
	    if (signo == 1){
            signo = -1;
        }else{
            signo = 1;
        }
	}
	return sumatoria;
}

int factorial(int numero){
    int resultado = 1;
    for(int i = 1; i <= numero; i++){
        resultado = resultado*i;
    }
    return resultado;
}