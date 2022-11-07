#include <stdio.h>

int main(){
    int numFuncionario,horas_trabalhadas;
    float valorPorHora, calculaSalario;
    scanf("%d", &numFuncionario);
    scanf("%d", &horas_trabalhadas);
    scanf("%f", &valorPorHora);
    calculaSalario = valorPorHora * horas_trabalhadas;
    printf("NUMBER = %d\n", numFuncionario);
    printf("SALARY = U$ %.2f\n",calculaSalario);
    return 0;
}