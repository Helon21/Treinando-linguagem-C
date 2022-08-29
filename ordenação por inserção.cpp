#include <stdio.h>

/*ordenação por inserção*/

int main(){
    int i, j, num_atual,vetor[5] = {5,3,10,1,6}; // variável i vai armazenar indice atual, variavel aux1 vai armazenar o indice posterior

    for(i = 1; i < 5; i++){
        num_atual = vetor[i];
        j = i - 1;

        while((j >= 0) && (num_atual < vetor[j])){
            vetor[j+1] = vetor[j];

            j--;
        }
        vetor[j+1] = num_atual;
    }

    for(i = 0; i < 5; i++){
        printf("%d", vetor[i]);
    }
     
    return 0;
}