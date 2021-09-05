#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool numeroAbundante(int numero){
    int contador = 0, aux = numero-1;
    while(aux > 0){
        if(numero%aux == 0)
            contador += aux;
        aux--; 
    }
    return contador > numero;
}

int main(){
    printf(numeroAbundante(100) ? "es abundante" : "no es abundante");
    return 0;
}