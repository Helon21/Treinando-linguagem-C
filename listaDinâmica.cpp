#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct t_aluno
{
	int ra,faltas;
	float nota1,nota2;
};

struct t_no
{
	t_aluno info;
	t_no *prox;
};

void inicia_lista(t_no *&cabeca)
{
	cabeca=NULL; //n�o aponta para estrutura nenhuma
}

void insere_inicio(t_no *&cabeca,t_aluno al)
{
	if (cabeca==NULL) //A lista esta vazia
	{
		cabeca=(t_no*)malloc(sizeof(t_no));
		cabeca->info=al; //Coloca os dados do aluno dentro do no
		cabeca->prox=NULL;
	}
	else
	{
		t_no *novo;
		novo=(t_no*)malloc(sizeof(t_no));
		novo->info=al;
		novo->prox=cabeca;
		cabeca=novo;
	}
}

void apaga_inicio(t_no *&cabeca)
{
	if (cabeca==NULL)
	{
		printf ("Lista esta vazia!\n");
	}
	else
	{
		t_no *antiga_cabeca=cabeca;
		cabeca=cabeca->prox;
		free(antiga_cabeca);
	    printf ("Registro apagado\n");
	}
}

void mostra_todos(t_no *&cabeca)
{
	if (cabeca==NULL)
	{
		printf ("A lista esta vazia!\n");
	}
	else
	{
		t_no *aux;
		aux=cabeca; //aux recebe o ponteiro que incia a estrutura
		while (aux!=NULL)
		{
			printf ("RA:%5d N1:%4.1f N2%4.1f FALTAS:%3d\n",
			     aux->info.ra, aux->info.nota1, 
				 aux->info.nota2, aux->info.faltas);
			aux=aux->prox; //aux recebe o conteudo do endereco que o campo prox aponta 
		}
	}
}

t_aluno recebe_dados() //insercao dos dados
{
	t_aluno a;
	printf ("RA    :");
	scanf ("%d",&a.ra);
	printf ("NOTA1 :");
	scanf ("%f",&a.nota1);
	printf ("NOTA2 :");
	scanf ("%f",&a.nota2);
	printf ("FALTAS:");
	scanf ("%d",&a.faltas);
	return a;
}

main()
{
	//clrscr();
	t_no *algoritmos; //ponteiro para uma estrutura do tipo t_no
	inicia_lista (algoritmos);
	char tecla;
	t_aluno aluno;

	while (tecla!='S' && tecla!='s')
	{
	  printf("[I]ncluir [L]istar [D]eletar [S]air\n");
	  tecla=getch(); 
	  if (tecla=='i' || tecla=='I')     
	  {
		  aluno=recebe_dados();
		  insere_inicio (algoritmos, aluno);		
	  } 
	  else if (tecla=='l' || tecla=='L')
	  {
		mostra_todos(algoritmos);
	  } 
	  else if (tecla=='d' || tecla=='D')
	  {
		  apaga_inicio(algoritmos);
	  }
	  else if (tecla=='s' || tecla=='S')
	  {
	   printf("Saindo\n");
	  } 
	  else
	  {
		printf("Opcao invalida\n");
	  }
	}
}