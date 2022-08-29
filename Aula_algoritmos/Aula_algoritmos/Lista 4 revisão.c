#include <stdio.h>

int main(){
    int i, vet1[5], vet2[5], soma[5];
    for(i = 0; i < 5; i++){
        printf("Informe um valor inteiro: ");
        scanf("%d", &vet1[i]);
    }
    for(i = 0; i < 5; i++){
        printf("Informe um valor inteiro: ");
        scanf("%d", &vet2[i]);
    }
    for(i = 0; i < 5; i++){
        soma[i] = vet1[i] + vet2[i];
        printf("Soma da posição %d é: %d\n", i ,soma[i]);
    }

    return 0;
}