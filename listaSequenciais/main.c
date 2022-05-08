#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaSequencial.h"

int main() {
    int i = 0;
    int j = 0;

    printf("==================================\n");
	printf(" LISTA SEQUENCIAL \n");
	printf("==================================\n");

    printf("Criando uma lista sequencial de 5 caracteres\n");
    linha();
    while(i < 5) {
        printf("Digite um caractere: \n");
        scanf(" %c", &valor);
        inserir(Vetor, valor, n);
        ++i;
        ++n;    
    }
    
    linha();
    printf("\n A lista criada contem os seguintes elementos: \n");
    for(posicao=0; posicao<MAX; posicao++) {
        printf(" %c |", Vetor[posicao]);
    }
    
    int cont = 0;
    while (cont == 0) {
        linha();
        printf("\n1- Consultar\n2- Remover\n3- Sair");
        printf("\nDigite a opcao desejada: ");
        scanf(" %d", &j);
        if (j == 1){
            printf("\n\nInforme um char para procurar na lista: ");
            linha();
            scanf(" %c", &valor);
            consultar(Vetor, valor, n);
        } else if (j == 2){
            printf("\nInforme um char para remover da lista: ");
            linha();
            scanf(" %c", &valor);
            remover(Vetor, valor, n);

            linha();
            printf("\n\n A lista criada contem os seguintes elementos agora: \n\n");
            for(posicao=0; posicao<MAX; posicao++) {
            printf(" %c |", Vetor[posicao]);
        }
        } else if (j == 3){
            printf("\nObrigado!");
            linha();
            cont = 1;
        } else {
            printf("opcao nao encontrada");
        }

    }

    return 0;
}
