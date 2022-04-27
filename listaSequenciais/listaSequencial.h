#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

char Vetor[MAX], valor;
int n = 0, posicao;

//Função para inserir um elemento
char inserir (char Vetor[], char valor, int n) {
    if(MAX == n){
        printf("A lista está cheia");
    } else {
        Vetor[n] = valor;
        n++;
    }
}
