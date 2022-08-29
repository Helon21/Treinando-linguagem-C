#include <stdio.h>
#include <conio.h>

/* Mostra qual número é o maior */

int main() {
    int num1, num2;
    printf("Informe o primeiro número");
    scanf("%d", &num1);
    printf("Informe o segundo número");
    scanf("%d", &num2);
    if(num1 > num2) {
        printf("O numero 1 é maior %d", num1);
    }
    else if(num2 > num1) {
        printf("Numero 2 é maior %d", num2);
    }
    else{
        printf("Não use números iguais, inicie o programa novamente e tente denovo");
    }
    getch();
    return 0;
}