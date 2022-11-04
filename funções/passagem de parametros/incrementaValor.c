#include <stdio.h>

void incrementa(int x);

int main(){
    int x;
    printf("insira o valor de X: ");
    scanf("%d", &x);
    resultadoIncremento = incrementa(x);

    return 0;
}


void incrementa(int x){
    x = x + 1;
}