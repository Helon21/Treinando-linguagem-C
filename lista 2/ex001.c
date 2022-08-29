#include <stdio.h>
#include <conio.h>

/* calcula a área do losango */

int main() {
    float diagonal_maior,diagonal_menor,resultado;
    printf("Informe a medida da diagonal maior");
    scanf("%f", &diagonal_maior);
    printf("Informe a medida da diagonal menor");
    scanf("%f", &diagonal_menor);
    resultado = (diagonal_maior * diagonal_menor) / 2;
    printf("A área do losango é igual à: %f\n\n", resultado);
    getch();
    return 0;
}