#include <stdio.h>
#include "vetor.h"

int Soma(int a, int b){
    return (a + b);
}

int Multiplicacao(int a, int b){
    return (a * b);
}

int main(){
    Vetor vetor;
    LeVetor(&vetor);
    printf("Soma: %d\n", AplicarOperacaoVetor(&vetor, Soma));
    printf("Produto: %d\n", AplicarOperacaoVetor(&vetor, Multiplicacao));
    return 0;
}