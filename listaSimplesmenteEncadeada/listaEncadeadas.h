
#include <stdio.h>
#include <stdlib.h>

// cria uma estrutura de nó
typedef struct node{
	int num;
	struct node *prox;
} node;

//declaração inteiro para controlar tamanho da lista
int tam;

// funcão para alocar memoria, caso não tenha espaço é apresentado erro
node *alocar(){
	node *novo = (node *) malloc(sizeof(node));
	if (!novo){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}
	return novo;
}

// função para inicializar a lista e limpa o tamanho da lista
void inicia(node *LISTA){
	LISTA->prox = NULL;
	tam = 0;
}

/* ==================== TRECHO PARA ADICIONAR ==================== */
// função para adicionar no inicio da lista
void AdicionarInicio(node *LISTA){
	node *novo = alocar();
	
	novo->prox = LISTA->prox;
	LISTA->prox = novo;
	printf("Novo elemento: ");
	scanf("%d", &novo->num);
	
	tam++;
}
// função para adicionar no fim da lista
void AdicionarFim(node *LISTA){
	node *novo = alocar();
	
	novo->prox = NULL;
	if(LISTA->prox == NULL)
		LISTA->prox = novo;
	else{
		node *tmp = LISTA->prox;
		while(tmp->prox != NULL)
			tmp = tmp->prox;
		tmp->prox = novo;
	}
	printf("Novo elemento: ");
	scanf("%d", &novo->num);
	
	tam++;
}

/* ========================== TRECHO PARA CONSULTAR ======================= */
// funcao para exibir toda lista
void ExibirLista(node *LISTA){
	if (LISTA->prox == NULL)
		printf("Lista vazia!");
	else{
		node *tmp;
		for (tmp = LISTA->prox; tmp != NULL; tmp = tmp->prox)
		printf("%d\n", tmp->num);
	}
	printf("Tamanho da lista: %d\n", tam);
	printf("\n\n");
	system("PAUSE");
}



/* ========================== TRECHO PARA REMOVER ========================== */
// funcao para remover do inicio da lista
void RemoverInicio(node *LISTA){
	if (LISTA->prox == NULL)
		printf("Lista vazia!");
	else{
		node *tmp = LISTA->prox;
		LISTA->prox = tmp->prox;
		printf("NO %d removido com sucesso!",tmp->num);
		free(tmp);
		tam--;
	}
	printf("\n\n");
	system("PAUSE");
}

// funcao para remover do final da lista
void RemoverFim(node *LISTA){
	node *aux;
	
	if (LISTA->prox == NULL)
		printf("Lista vazia!");
	else{
		node *ultimo = LISTA->prox, *penultimo = LISTA; 
		while(ultimo->prox != NULL){
			penultimo = ultimo;
			ultimo = ultimo->prox;
			tam--;
		}
		penultimo->prox = NULL;
		printf("NO %d removido com sucesso!",ultimo->num);
	}
	printf("\n\n");
	system("PAUSE");
}


/* ======================= LIBERA A LISTA =============================== */
// funcao para liberar a lista de memoria
void Liberar(node *LISTA){
	node *atual = LISTA->prox, *proximo;
	while(atual != NULL){
		proximo = atual->prox;
		free(atual);
		atual = proximo;
	}
	
	inicia(LISTA);
}
