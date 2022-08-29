#include <stdio.h>

int main() {
    int n1, n2;
    do{
        printf("Digite o valor de n1: ");
        scanf("%d", &n1);
        printf("Digite o valor de n2: ");
        scanf("%d", &n2);
    }
    while(n2 == 0);
    printf("Divisão %d\n\n", n1/n2);
    return 0;
}