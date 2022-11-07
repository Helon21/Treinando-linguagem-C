#include <stdio.h>

int main(){
    int x;
    float y, kmPorLitro;
    scanf("%d", &x);
    scanf("%f", &y);
    kmPorLitro = x / y;
    printf("%.3f km/l\n", kmPorLitro);
    return 0;
}