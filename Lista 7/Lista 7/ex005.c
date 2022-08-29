#include <stdio.h>

int main() {
	int num[30],x;
	for(x = 0; x < 30; x++){
		printf("Informe um valor inteiro para o vetor");
		scanf("%d", &num[x]);
	}
	for(x = 29; x >= 0; x--){
		printf("O valor digitado e: %d \n", num[x]);
	}
	return 0;
}
