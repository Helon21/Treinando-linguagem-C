#include <stdio.h>

int main() {
	int num[10],x;
	for(x = 0; x < 10; x++){
		printf("Informe um n�mero para o vetor");
		scanf("%d", &num[x]);
	}
	for(x = 0; x < 10; x++){
		printf("%d\n\n", num[x]);
	}
	return 0;
}
