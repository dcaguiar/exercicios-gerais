#include "utils.h"

void LeNumeros(int *array, int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
        scanf("%d", &array[i]);
    }
}

void EncontraMaiorMenorMedia(int *array, int tamanho, int *maior, int *menor, float *media){
    int i, soma=0;
    for(i=0;i<tamanho;i++){
        //printf("%d", array[i]);
        if(!i){
            *maior = array[i];
            *menor = array[i];
        }
        else if(array[i] > *maior){
            *maior = array[i];
        }
        else if(array[i] < *menor){
            *menor = array[i];
        }
        soma += array[i];
    }
    *media = (float)soma/tamanho;
}