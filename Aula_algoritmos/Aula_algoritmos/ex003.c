#include <stdio.h>

int main() {
    char aluno[10];
    float notas_bimestrais[40];
    for(int i = 0; i < 10; i++){
        scanf("%s", &aluno[i]);
    }
    for(int x = 0; x < 40; x++){
        scanf("Digite 4 notas para cada aluno %f", notas_bimestrais[x]);
        if(notas_bimestrais[x] <= 59 && notas_bimestrais[x] <= 0){
            printf("Aluno reprovado");
        }
        else if(notas_bimestrais[x] >= 60 && notas_bimestrais[x] <= 0 && notas_bimestrais[x] <= 100){
            printf("Aluno aprovado");
        }
        else{
            printf("Digite uma nota válida");
        }
    }


    return 0;
}