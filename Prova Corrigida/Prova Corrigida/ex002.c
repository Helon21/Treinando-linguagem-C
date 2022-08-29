#include <stdio.h>

int main(){
	int nlados;
	float tlado, area;
	printf("Informe o numero de lados: ");
	scanf("%d", &nlados);
	printf("Informe o tamanho do lado: ");
	scanf("%f", &tlado);
	if(nlados == 3){
		area = tlado*tlado*1.73/4; 
	}
	else if(nlados == 4){
		area = tlado*tlado;
	}
	else if(nlados == 6){
		area = 6*tlado*tlado*1.73/4;
	}
	else{
		printf("nao sei calcular a area");
	}
	return 0;
}
