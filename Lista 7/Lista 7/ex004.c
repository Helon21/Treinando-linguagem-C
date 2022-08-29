#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10],x;
    for(x = 0; x < 10; x++){
    	printf("Informe um número");
        scanf("%d", vetor1[x]);
    }
    for(x = 0; x < 10; x++){
        vetor2[x] = vetor1[x] * 2;
        printf("numero: %d", vetor2[x]);
    }

    return 0;
}
