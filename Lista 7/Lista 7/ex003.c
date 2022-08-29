#include <stdio.h>

int main(){
	int num[20], num2[20], x;
	for(x = 0; x < 20; x++){
		printf("Informe um número inteiro");
		scanf("%d", &num[x]);
	}
	for(x = 0; x < 20; x++){
		printf("Informe um número inteiro");
		scanf("%d", &num2[x]);
	}
	for(x = 0; x < 20; x++){
		if(num[x] == num2[x]){
			printf("%d, %d", num[x], num2[x]);
		}
	}
}
