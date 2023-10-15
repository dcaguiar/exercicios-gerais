#include "vetor.h"
#include <stdio.h>

void LeVetor(Vetor *vetor){
    scanf("%d", &vetor->tamanhoUtilizado); 
    for(int i=0; i < vetor->tamanhoUtilizado; i++){
        scanf("%d", &vetor->elementos[i]);
    }
}

int AplicarOperacaoVetor(Vetor *vetor, Operation op){
    int resultado = 0;
    for(int i = 0; i < vetor->tamanhoUtilizado; i++){
        if(!i){
            resultado = vetor->elementos[i];
        }
        else{
            resultado = op(resultado, vetor->elementos[i]);
        }
    }
    return resultado;
}