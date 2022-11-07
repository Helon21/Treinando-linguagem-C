#include <stdio.h>

int main(){
    char vendedor[100];
    double salarioFixo, totalDasVendas, comissao;
    scanf("%s", &vendedor);
    scanf("%lf",&salarioFixo);
    scanf("%lf",&totalDasVendas);
    comissao = (totalDasVendas * .15) + salarioFixo;
    printf("TOTAL = R$ %.2lf\n", comissao);

    return 0;
}