#include <stdio.h>
#include <stdlib.h>

/* */

int main() {
    int i, vetor1[5], vetor2[5], vetor3[5];

    for (i = 0; i < 5; i++) {
        vetor1[i] = rand() % 100;
        vetor2[i] = rand() % 100;
        vetor3[i] = vetor1[i] + vetor2[i];
    }

    printf("Vetor 3: %d\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", vetor3[i]);
    }
    return 0;
}