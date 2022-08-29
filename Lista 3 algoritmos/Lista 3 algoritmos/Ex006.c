#include <stdio.h>

int main(){
    int cont,valor,resultado;
    while(cont <= 10){
        cont = cont + 1;
        scanf("%d", &valor);
    }
    resultado = valor / 10;
    printf("A média é %d", resultado);
}