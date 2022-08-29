#include <stdio.h>

int main() {
	int x,y,mat[3][3];
	for(x= 0; x < 3; x++){
		for(y = 0; y < 3; y++){
			printf("Insira um valor para a matriz");
			scanf("%d", &mat[x][y]);
			
		}
	}
	for(x = 0; x < 3; x++){
		for(y = 0; y < 3; y++){
			if(x == y){
				printf("matriz %d", mat[x][y]);
			}
		}
	}
	return 0;
}
