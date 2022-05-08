#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeadas.h"


int main(){
	
	node *LISTA = alocar();
	inicia(LISTA);
	int opt;
	
	do{
		// system("CLS");
		printf("==================================\n");
		printf(" LISTA SIMPLESMENTE ENCADEADA \n");
		printf("==================================\n");
		printf(" 1-Inserir no um numero inicio da lista\n");
		printf(" 2-Inserir no um numero fim da lista\n");
		// printf(" 3-Inserir em um ponto da lista\n");
		printf(" 4-Remover um numero do inicio da lista\n");
		printf(" 5-Remover um numero do fim da lista\n");
		// printf(" 6-Remover de um ponto da lista\n");
		printf(" 7-Exibir elementos da lista \n"); //esse
		// printf(" 8-Consultar elemento \n"); //esse
		printf(" 9-Liberar os elementos da lista \n");
		printf(" 0-Sair \n");
		printf("==================================\n");
		printf("Escolha a opcao: ");
		scanf("%d", &opt);
		// system("CLS");
		
		switch(opt)
		{
			case 1: 
				AdicionarInicio(LISTA);
				break;
			case 2: 
				AdicionarFim(LISTA);
				break;
			case 4: 
				RemoverInicio(LISTA);
				break;
			case 5: 
				RemoverFim(LISTA);
				break;
			case 7: 
				ExibirLista(LISTA);
				break;
			
			case 9: 
				Liberar(LISTA);
				ExibirLista(LISTA);
				break;
			case 0: 
				Liberar(LISTA);
				break;
			default: 
				printf("Comando invalido\n\n");
		}
	}while(opt <= 9 && opt != 0);
	Liberar(LISTA);
	return 0;
}