#include <stdio.h>

int main(){
	float v1x,v1y,v2x,v2y,px,py;
	printf("Informe o eixo x de v1: ");
	scanf("%f", &v1x);
	printf("Informe o eixo y de v1: ");
	scanf("%f", &v1y);
	printf("Informe o eixo x de v2: ");
	scanf("%f", &v2x);
	printf("Informe o eixo y de v2: ");
	scanf("%f", &v2y);
	printf("Informe o eixo de x de p: ");
	scanf("%f", &px);
	printf("Informe o eixo y de p: ");
	scanf("%f", &py);
	if((px >= v1x && px <= v2x) && (py >= v1y && py <= v2y)){
		printf("Dentro do retangulo");
	}
	else{
		printf("Fora do retangulo");
	}
	return 0;
}
