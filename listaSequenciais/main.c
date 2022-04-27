#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaSequencial.h"

int main() {
    int i = 0;

    printf("ATIVIDADE DE PRODUCAO U2\n");
    printf("Lista sequencial\n\n");

    printf("Inserindo valores char na lista\n");
    while(i < 5) {
        printf("\nInforme o char que deseja inserir: ");
        scanf(" %c", &valor);
        inserir(Vetor, valor, n);
        ++i;
        ++n;    
    }
    
    printf("\n\n A lista criada contem os seguintes elementos: \n\n");
    for(posicao=0; posicao<MAX; posicao++) {
        printf(" %c |", Vetor[posicao]);
    }

    printf("\n\nInforme um char para procurar na lista: ");
    scanf(" %c", &valor);
    consultar(Vetor, valor, n);

    return 0;
}
