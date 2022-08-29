#include <stdio.h>

int main() {
    float salario[20];
    int x;
    for (x = 0; x < 20; x++){
        printf("Informe o %d salario ", x);
        scanf("%f", &salario[x]);
    }
    for (x = 0; x < 20; x++){
        salario[x] = salario[x] * 1.08;
        printf("O novo salario %d e: %.3f", x,salario[x]);
    }
    return 0;
}
