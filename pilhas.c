#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Elemento{
    int num;
    struct Elemento *prox; 
};

typedef struct Elemento Elemento;

struct Pilha{
    struct Elemento *topo;
};
typedef struct Pilha Pilha;

Elemento *aux;

Pilha* cria_pilha(){
    Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL){
        pi -> topo = NULL;
    }
    return pi;
}

int main(){
    char tecla;
    Pilha *pi = cria_pilha();
    while(tecla != 'S' && tecla != 's'){
        printf("[I]ncluir [L]istar [D]eletar [E]svaziar [S]air \n");
        tecla = getch();
        if(tecla == 'i' || 'I'){
            insere_elemento(pi);
        }
        else if(tecla == 'l' || 'L'){
            consulta_pilha(pi);
        }
        else if(tecla == 'd' || 'D'){
            remove_elemento_pilha(pi);
        }
        else if(tecla == 'e' || 'E'){
            esvazia_pilha(pi);
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

void insere_elemento(Pilha *pi){
	Elemento *novo =(Elemento*) malloc(sizeof(Elemento));
	printf("Digite o numero a ser inserido na pilha: ");
	scanf("%d",&novo->num);
	novo->prox = pi->topo;
	pi->topo = novo;
	printf("\nNumero inserido na pilha!");
	getch();
}		

void consulta_pilha(Pilha *pi){
	if(pi->topo == NULL){
		printf("\nPilha Vazia!!");
	}
    else{
		aux = pi->topo;
		do{
			printf(" %d ", aux->num);
			aux = aux->prox;
		} while(aux != NULL);
	}
	getch();
}		

void remove_elemento_pilha(Pilha *pi){
	 if(pi->topo ==  NULL){
		printf("\nPilha Vazia!!");
	} 
    else{
		aux = pi->topo;
		printf("%d removido!", pi->topo->num);
		pi->topo = pi->topo->prox;
		free(aux);
	}
	getch();
}

void esvazia_pilha(Pilha *pi){
	if(pi->topo == NULL){
		printf("\nPilha Vazia!!");
	}else{
		aux = pi->topo;
		do{
			pi->topo = pi->topo->prox;
			free(aux);
			aux = pi->topo;
		}
        while(aux != NULL);
		printf("\nPilha Esvaziada!!");
	}
	getch();
}		