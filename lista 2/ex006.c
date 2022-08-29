#include <stdio.h>
#include <conio.h>

/* com base nos números inseridos, informa o tipo de triângulo */

int main() {
    int x, y, z;
    printf("Informe um número inteiro para ser o valor de X");
    scanf("%d", &x);
    printf("Informe um número inteiro para ser o valor de Y");
    scanf("%d", &y);
    printf("Informe um número inteiro para ser o valor de Z");
    scanf("%d", &z);
    if(x == y && x == z){
        printf("É um triangulo equilátero");
    }
    else if(x == y && x != z){
        printf("É um triangulo isóceles");
    }
    else if(x != y && x != z){
        printf("É um triangulo escaleno");
    }
    else{
        printf("erro");
    }
    getch();
    return 0;
}
