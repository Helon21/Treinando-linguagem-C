#include <stdio.h>
#include <conio.h>

/* informa qual o maior número */

int main() {
    int num1, num2, num3;
    printf("Informe o primeiro número");
    scanf("%d", &num1);
    printf("Informe o segundo número");
    scanf("%d", &num2);
    printf("Informe o terceiro número");
    scanf("%d", &num3);
    if(num1 > num2 && num1 > num3){
        printf("O maior número é o primeiro: %d", num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("O maior número é o segundo: %d", num2);
    }
    else if(num3 > num1 && num3 > num2){
        printf("O maior número é o terceiro: %d", num3);
    }
    getch();
    return 0;
}