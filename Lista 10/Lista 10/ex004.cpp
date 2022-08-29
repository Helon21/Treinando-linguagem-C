#include <stdio.h>

struct livro{
	char nome[2];
	char editora[2];
	int isbn;
	int ano;
	int paginas;
	float preco;
};


int main() {
	struct livro livros[2];
	int x,soma = 0;
	float media;
	for(x = 0; x < 2; x++){
		printf("Informe o nome: ");
		scanf("%s", &livros[x].nome);
		printf("Informe a editora");
		scanf("%s", &livros[x].editora);
		printf("Informe o isbn");
		scanf("%s", &livros[x].isbn);
		printf("Informe o ano");
		scanf("%d", &livros[x].ano);
		printf("Informe as paginas");
		scanf("%d", &livros[x].paginas);
		printf("Informe o preco: ");
		scanf("%d", &livros[x].preco);
		soma = soma + livros[x].paginas;
	}
	media = soma / 5.0;
	printf("A media de paginas e: %.2f", media);
	
	return 0;
}
