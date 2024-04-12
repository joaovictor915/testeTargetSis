#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* isInFibonacci(int num) {
    int found = 1;
    int previous = 0, next = 1;
    int atual;
    while (atual <= num) {
        atual = previous + next;
        if (atual == num) return "O numero esta presente na sequencia de fibonacci\n";
        int tmp = next;
        next = atual;
        previous = tmp;
    }
    // Se chegou até aqui, não está presente
    return "O numero %d não está presente na sequência de fibonacci\n";
}

char * inverteString (char * string, int tamanho) {
    char* vetor = (char*) malloc(sizeof(char) * tamanho);
    for (int i = 1; i <= strlen(string); i++) {
        vetor[tamanho - i] = string[i-1];
    }
    return vetor;
}

int main () {
    char resposta[100];
    // Teste da questão 2 com os números 5 (presente) e 7 (não presente) em fibonacci
    printf("5: %s", isInFibonacci(5));
    printf("7: %s", isInFibonacci(7));

    // Teste da questão 5 com as strings Galo e Cruzeiro
    printf("Galo: %s\n", inverteString("Galo", strlen("Galo")));
    printf("Cruzeiro: %s\n", inverteString("Cruzeiro", strlen("Cruzeiro")));
}

