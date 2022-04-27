#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

char Vetor[MAX], valor;
int n = 0, posicao; achou = 0;

//Função para inserir um elemento
char inserir (char Vetor[], char valor, int n) {
    if(MAX == n){
        printf("A lista está cheia");
    } else {
        Vetor[n] = valor;
        n++;
    }
}

//função para consulta da lista
void consultar (char Vetor[], char valor, int n) {
    for(int i=0; i<MAX; ++i) {
        if(Vetor[i] == valor) {
            achou = 1;
            printf(" \nO valor %c esta na posicao %d da lista", valor, i);
        } 
        if(achou == 0) {
            printf(" \nO valor %c nao foi encontrado na lista", valor);
        }
    }
}
