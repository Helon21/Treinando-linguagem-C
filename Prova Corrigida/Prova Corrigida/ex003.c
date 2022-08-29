#include <stdio.h>

int main() {
	int mat[8][8], peao = 0,ausencia = 0;
	for(int x = 0; x < 8; x++){
		for(int y = 0; y < 8; y++){
			printf("Informe o valor");
			scanf("%d", &mat[x][y]);
		}
	}
	for(int x = 0; x < 8; x++){
		for(int y = 0; y < 8; y++){
		printf("Informe o valor");
		scanf("%d", &mat[x][y]);
		}
	}
	for(int x = 0; x < 8; x++){
		for(int y = 0; y < 8; y++){
			if(mat[x],[y] == 0){
				ausencia++;
			}
			if(mat[x][y] == 1){
				peao++;
			}
		}
	}
	
	return 0;
}
