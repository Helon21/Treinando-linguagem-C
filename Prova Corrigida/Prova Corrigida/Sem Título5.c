#include <stdio.h>

struct aluno{
	char nome[50];
	char matricula[8];
	char turma;
	float nota1, nota2, nota3, nota4;
};

int main(){
	struct aluno vetor[20];
	float media;
	for(int x = 0; x < 20; x++){
		printf("Informe o nome");
		scanf("%s", vetor[x].nome);
		fflush(stdin); /*limpa o buffer de leitura */
		printf("Informe a matricula: ");
		scanf("%s", vetor[x].matricula);
		printf("Informe a turma");
		scanf("%c", &vetor[x].turma);
		printf("Informe a nota 1: ");
		scanf("%f", &vetor[x].nota1);
		printf("Informe a nota 2: ");
		scanf("%f", &vetor[x].nota2);
		printf("Informe a nota 3: ");
		scanf("%f", &vetor[x].nota3);
		printf("Informe a nota 4: ");
		scanf("%f", &vetor[x].nota4);
	}
	for(int x = 0; x < 20; x++){
		media = (vetor[x].nota1 + vetor[x].nota2 + vetor[x].nota3 + vetor[x].nota4) / 4;
		if(media >= 60){
			printf("Nome: %s\n", vetor[x].nome);
			printf("Matricula: %s\n", vetor[x].matricula);
			printf("Turma: %c", vetor[x].turma);
			printf("Media: %f", media);
		}
		else if(media <= 60){
			printf("reprovado");
		}
		else{
			printf("Media invalida, tente novamente");
		}
	}	
	return 0;
}
