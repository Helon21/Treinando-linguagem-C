#include <stdio.h>

int main() {
    int i, num[10];
    for(i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 10; i++){
        if(num[i] % 7 == 0){
            printf("Numero multiplo de 7: %d",num[i]);
        }
    }
    return 0;

}