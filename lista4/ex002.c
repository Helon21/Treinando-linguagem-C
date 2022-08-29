#include <stdio.h>
#include <stdlib.h>

/*preenche um vetor com números aleatórios, e mostra indice por indice se cada número dentro do vetor é par ou impar*/

int main() {
    int i, num[15];
    for(i = 0; i < 15; i++) {
        num[i] = rand() % 100;
    }

    for(i = 0; i < 15; i++) {
        if(num[i] % 2 == 0){
            printf("O numero e par %d\n", num[i]);
        }
        else{
            printf("O numero e impar %d\n", num[i]);
        }
    }
    return 0;
}