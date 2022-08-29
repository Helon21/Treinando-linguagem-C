#include <stdio.h>
#include <conio.h>
#include <math.h>

/* calcula a hipotenusa */

int main() {
    float hipotenusa, b,c;
    printf("Informe o valor de b");
    scanf("%f", &b);
    printf("Informe o valor de c");
    scanf("%f", &c);
    hipotenusa = sqrt(pow(b,2) + pow(c,2));
    printf("O valor da hipotenusa é: %2.f\n\n", hipotenusa);
    getch();
    return 0;
}