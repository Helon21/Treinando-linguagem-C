#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Elemento{
	int num;
	struct Elemento *prox;
};
typedef struct Elemento Elemento;

struct Fila{
    struct Elemento *inicio;
    struct Elemento *fim; 
};
typedef struct Fila Fila;

Elemento *aux;

Fila* cria_fila(){
    Fila* fi = (Fila*) malloc(sizeof(Fila));
    if(fi != NULL){
        fi->fim = NULL;
        fi->inicio = NULL;
    }
    return fi;
}	

int main(){
    char(tecla);
    Fila *fi = cria_fila();
    while(tecla != 'S' && tecla != 's'){
        printf("[I]ncluir [L]istar [D]eletar [E]svaziar [S]air \n");
        tecla = getch();
        if(tecla == 'i' || 'I'){
            insere_elemento(fi);
        }
        else if(tecla == 'l' || 'L'){
            consulta_pilha(fi);
        }
        else if(tecla == 'd' || 'D'){
            remove_elemento_pilha(fi);
        }
        else if(tecla == 'e' || 'E'){
            esvazia_pilha(fi);
        }
        else if(tecla == 's' || 'S'){
            printf("Saindo \n");
        }
        else{
            printf("Opção Inválida");
        }
    }
    return 0;
}		

void insere_elemento(Fila *fi){
	Elemento*novo =(Elemento*) malloc(sizeof(Elemento));
	printf("Digite o numero a ser inserido na fila: ");
	scanf("%d",&novo->num);
	novo->prox = NULL;
	if(fi->inicio == NULL){
		fi->inicio = novo;
		fi->fim = novo;
	}else{
		fi->fim->prox = novo;
		fi->fim = novo;
	}
	printf("\nNumero inserido na fila!");
	getch();
}		

void consulta_fila(Fila *fi){
	if(fi->inicio == NULL){
		printf("\nFila Vazia!!");
	}else{
		aux = fi->inicio;
		do{
			printf(" %d ", aux->num);
			aux = aux->prox;
		} while(aux != NULL);
	}
	getch();
}			

void remove_elemento_fila(Fila *fi){
	if(fi->inicio == NULL){
		printf("\nFila Vazia!!");
	}else{
		aux = fi->inicio;
		printf("%d removido!", fi->inicio->num);
		fi->inicio = fi->inicio->prox;
		free(aux);
	}
	getch();
}				

void esvazia_fila(Fila *fi){
	if(fi->inicio == NULL){
		printf("\nFila Vazia!!");
	}else{
		aux = fi->inicio;
		do{
			fi->inicio = fi->inicio->prox;
			free(aux);
			aux = fi->inicio;
		}while(aux != NULL);
		printf("\nFila Esvaziada!!");
	}
	getch();
}		