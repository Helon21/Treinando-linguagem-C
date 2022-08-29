#include <stdio.h>

int main() {
    int mult[3] [3],num, i, x ,matrix[3] [3];
    for(i = 0; i < 3; i++){
        for(x = 0; x < 3; x++){
            printf("Informe um valor para a matriz: ");
            scanf("%d", &matrix[i][x]);
        }
    }
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    for(i = 0; i < 3; i++){
        for(x = 0; x < 3; i++){
            mult[i][x] = matrix[i][x] * num;
            printf("O novo valor da matriz e %d\n", mult[i][x]);
        }
    }



    return 0;


}