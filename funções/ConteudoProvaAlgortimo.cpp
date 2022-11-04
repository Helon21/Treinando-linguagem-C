#include <stdio.h>
#include <stdlib.h>
#define tamanho 5

/* ORDENAÇÕES */
void ordenacaoPorSelecao(int vetor[],int n);
void ordenacaoPorInsercao(int vetor[],int n);
void ordenacaoPorBubble(int vetor[],int n); 
void ordenacao(int vet[],int n, void (*funcOrd)(int[],int));
void imprimirVetor(int vet[],int n);

/*PESQUISA */
int pesquisa_binaria_recursiva(int vetor[tamanho],int comeco,int fim,int item);
int pesquisa_sequencial(int vetor[tamanho],int item);

int main(){
	int vetorSelecao[5] = {4,5,3,2,1};
	int vetorInsercao[5] = {6,7,8,3,5};
	int vetorBubble[5] = {10,15,44,36,18};
	int vetorParaPesquisa[5] = {1,3,5,9,10};
	int pb;
	int ps;
	/* Ordena��es */
	ordenacao(vetorSelecao,5,&ordenacaoPorSelecao);	
	ordenacao(vetorInsercao,5,&ordenacaoPorInsercao);
	ordenacao(vetorBubble,5,&ordenacaoPorBubble);
	
	/* Pesquisas bin�rias e sequ�ncias precisam que os vetores estejam ordenados */
	
	pb = pesquisa_binaria_recursiva(vetorParaPesquisa,0,tamanho - 1,9);
	ps = pesquisa_sequencial(vetorParaPesquisa,9);
	
	printf("%d \n",pb);
	printf("%d \n",ps);
	
	return 0;	
}

void ordenacaoPorSelecao(int vetor[],int n){
	for (int i = 0; i < n - 1; i++){
		int menor = i;
		for(int j= i + 1; j < n; j++){
			if (vetor[j] < vetor[menor]) menor = j;
		}
		int aux = vetor[i];
		vetor[i] = vetor[menor];
		vetor[menor] = aux;
		
	}
}

void ordenacaoPorInsercao(int vetor[],int n){
	int i,j;
	int vetorOrdenado[5];
	for (i = 1; i<n; i++){
		int x = vetor[i];
		j = i-1;
		/* Na linha abaixo esta comparando todo o vetor at� aquela posicao 
			{1,3,9,5,10};
			{1,3} aqui vetor[x] vale 3 e vetor[j] vale 1
			
			vetor[j] > x = SE vetor[j] for maior que x 
		*/
		while (j>=0 && vetor[j] > x) {
			
			vetor[j+1] = vetor[j];
			vetorOrdenado[i] = x;
			j--;
			/* ele ta comparado todos os numeros atr�s para ver em qual posic�o ele vai ser colocar */
			
		}
		
		
		vetor[j+1] = x;
		
	}
}

void ordenacaoPorBubble(int vetor[],int n){
	
	int k, j,aux;
	
		for (k = 1; k < n;k++){
			
			for (j = 0;j < n - 1; j++){
				
				if (vetor[j] > vetor[j + 1]){
					aux = vetor[j];
					vetor[j] = vetor[j  + 1];
					vetor[j + 1] = aux;
				}
			}
		}
}

void imprimirVetor(int vet[],int n){
	printf("[");
	for (int i = 0; i < n - 1;i++){
		printf("%d,",vet[i]);
	}
	printf("%d] \n",vet[n - 1]);
}

void ordenacao(int vet[],int n, void (*funcOrd)(int[],int)){
	
	printf("Vetor original: "); imprimirVetor(vet,n);
	funcOrd(vet,n);
	printf("Vetor ordenado: "); imprimirVetor(vet,n);
}

int pesquisa_binaria_recursiva(int vetor[tamanho],int comeco,int fim,int item){
	
	int i = (comeco + fim)/2;
	
	if (comeco > fim){
		printf("PARAMETROS INVALIDOS");
		return -1;
	}
	if (vetor[i] == item){
		return i;
	}
	
	if (vetor[i] < item){
		return pesquisa_binaria_recursiva(vetor,i + 1,fim,item);
	} else {
		return pesquisa_binaria_recursiva(vetor,comeco,i-1,item);
	}
}

int pesquisa_sequencial(int vetor[tamanho],int item){
	for(int i=0;i < tamanho;i++){
		if (vetor[i] == item){
			return i;
		}
	}
	
	return -1;
}
