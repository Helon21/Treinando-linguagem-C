#include <stdio.h>

int main(){
    int codigoPeca1, codigoPeca2, numeroPecas1, numeroPecas2;
    float valorUnitaroPeca1, valorUnitarioPeca2, valorTotal;
    scanf("%d %d %f", &codigoPeca1, &numeroPecas1, &valorUnitaroPeca1);
    scanf("%d %d %f", &codigoPeca2, &numeroPecas2, &valorUnitarioPeca2);
    valorTotal = (numeroPecas1 * valorUnitaroPeca1) + (numeroPecas2 * valorUnitarioPeca2);
    printf("VALOR A PAGAR: R$ %.2f\n",valorTotal);
    return 0;
}