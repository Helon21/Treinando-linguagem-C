
#include <stdio.h>
#include <string.h>


int main() {
    char palavra[50];
    strcpy(palavra, "inicio");

    while(strcmp(palavra, "fim") != 0){
        printf("Informe uma palavra");
        scanf("%s", palavra);
        if(strcmp(palavra, "fim") != 0){
            printf("Você digitou a palavra: %s",palavra);
        }
    }
    return 0;
}
