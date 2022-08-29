#include <stdio.h>

int main() {
    int nota1,nota2, media;
    printf("Informe a primeira nota");
    scanf("%d", &nota1);
    while(nota1 < 0 || nota1 > 10){
        printf("Primeira nota inválida, digite novamente: ");
        scanf("%d", &nota1);
    }
    printf("Informe a segunda nota");
    scanf("%d", &nota2);
    while(nota2 < 0 || nota2 > 10){
        printf("Segunda nota inválida, digite novamente: ");
        scanf("%d", &nota2);
    }
    media = (nota1 + nota2) / 2;
    printf("A média final é: %d", media);
    return 0;
}