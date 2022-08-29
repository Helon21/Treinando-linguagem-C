#include <stdio.h>
#include <stdlib.h>

/* armazena 8 números aleatórios em um vetor e mostra todos que são múltiplos de 3*/

int main() {
    int i,vetorNum[8];

    for(i = 0; i < 8; i++){
        vetorNum[i] = rand() % 100;
    }
    for(i = 0; i < 8; i++){
        if(vetorNum[i] % 6 == 0){
            printf("%d\n\n",vetorNum[i]);
        }
    }
    return 0;
}