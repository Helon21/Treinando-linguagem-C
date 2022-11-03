#include<stdio.h>
#include<conio.h>
#define MAX 100

struct tpdado {
int codigo;
char nome[50];
float preco;
};
struct tplista {
tpdado dados[MAX];
int tam; //Tamanho lógico
};

void inicia_lista(tplista &l) {
l.tam=0;
}

void insere
(tplista &l, tpdado dado){
if (l.tam<MAX) /* Se a lista nao esta cheia */ {
l.dados
[l.tam]=dado;
l.tam++;
}
else {
printf ("A lista esta cheia\n");
	}
}

void mostra_todos (tplista &l) {
if (l.tam==0) {
printf ("A lista esta vazia\n");
}
else {
for (int i=0;i<l.tam;i++) {
printf ("Codigo:%5d Nome:%s Preco:%4.1f\n",
l.dados[i].codigo,l.dados[i].nome,
l.dados[i].preco);
		}
	}
}

tpdado recebe_dados() {
tpdado a;
printf ("Codigo:");
scanf ("%d",&a.codigo);
printf ("Nome :");
scanf ("%s",&a.nome);
printf ("Preco :");
scanf ("%f",&a.preco);
return a;
}

int busca_binaria(tplista &l, int codigo) {
int primeiro, ultimo, medio;
primeiro=0;
ultimo=l.tam
-1;
while (primeiro<=ultimo) {
medio=(primeiro+ultimo)/2;
if (codigo==l.dados[medio].codigo) /* Achou */ {
return medio;
}
else if (codigo<l.dados[medio].codigo) /* vem antes */ {
ultimo=medio
-1;
}
else /*vem depois*/ {
primeiro=medio+1;
	}
}
return
-1;
}

void deletar (tplista &l,int pos) {
l.tam--;
l.dados[pos]=l.dados[l.tam];
}


main()
{
tplista produto;
inicia_lista (produto);
int r, pos;
char tecla;
tpdado dado;

while (tecla!='S' && tecla!='s') {
printf("[I]ncluir [L]istar [D]eletar [S]air\n");
tecla=getch();
if (tecla=='i' || tecla=='I') {
dado=recebe_dados();
insere (produto, dado);
}

else if (tecla=='l' || tecla=='L')
{
mostra_todos(produto);
}

else if (tecla=='d' || tecla=='D') {
printf ("Digite o Codigo:");
scanf ("%d",&r);
pos=busca_binaria
(produto,r);
if (pos!=
-1) //achou
{
deletar
(produto, pos);
printf ("Registro deletado\n");
}
else /* Nao achou */ {
printf ("Codigo nao existe\n");
	}
}

else if (tecla=='s' || tecla=='S') {
printf("Saindo\n");
}
else {
printf("Opcao invalida\n");
		}
}
}
