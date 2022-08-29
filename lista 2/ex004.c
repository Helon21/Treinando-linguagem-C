#include <stdio.h>
#include <conio.h>

/* exibe o quinto termo de uma progressão aritimética*/

int main(){
    int primeiro_termo, razao, quinto_termo;
    printf("Digite o primeiro termo");
    scanf("%d", &primeiro_termo);
    printf("Digite o valor da razão");
    scanf("%d", &razao);
    quinto_termo = primeiro_termo * razao + (quinto_termo - 1);
    printf("O quinto termo vale: %d", quinto_termo);
    getch();
    return 0;
}