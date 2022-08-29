
#include <stdio.h>
#include <conio.h>

/* mostra qual é o menor número, e indica se é o primeiro ou segundo ou terceiro...*/

int main() {
    int num1, num2, num3, num4, num5;
    printf("Digite um número");
    scanf("%d", &num1);
    printf("Digite um segundo número");
    scanf("%d", &num2);
    printf("Digite um terceiro número");
    scanf("%d", &num3);
    printf("Digite um quarto número");
    scanf("%d", &num4);
    printf("Digite um quinto número");
    scanf("%d", &num5);
    if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5){
        printf("O menor número é o primeiro %d", num1);
    }
    else if(num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5){
        printf("O menor número é o segundo %d", num2);
    }
    else if(num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5){
        printf("O menor número é o terceiro %d", num3);
    }
    else if(num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5){
        printf("O menor número é o quarto %d", num4);
    }
    else if(num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4){
        printf("O menor número é %d", num5);
    }
    else{
        printf("Erro!");
    }
    getch();
    return 0;
}