#include <stdio.h>

int main(){
    int tempoViagem, velocidadeMedia;
    float litrosNecessarios;
    scanf("%d %d", &tempoViagem, &velocidadeMedia);
    litrosNecessarios = (tempoViagem * velocidadeMedia) / 12.0;
    printf("%.3f\n", litrosNecessarios);
    return 0;
}