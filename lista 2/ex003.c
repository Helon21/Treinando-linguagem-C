#include <stdio.h>
#include <conio.h>

/* exibe o décimo termo de uma progressão aritimética, de acordo com o valor da razão escolhida junto do primeiro termo*/

int main(){
    int decimo_termo, primeiro_termo,razao;
    printf("Informe o valor da razão da progressão aritimética");
    scanf("%d", &razao);
    printf("Digite o valor do primeiro termo");
    scanf("%d", &primeiro_termo);
    decimo_termo = primeiro_termo + (decimo_termo - 1) * razao;
    printf("O valor do decimo termo é: %d", decimo_termo);
    getch();
    return 0;
}