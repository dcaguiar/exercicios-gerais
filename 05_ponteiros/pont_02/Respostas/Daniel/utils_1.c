#include "utils.h"
#include <stdio.h>
#define TRUE 1
#define FALSE 0

void LeIntervalo(int * m, int * n){
    scanf("%d%d",m,n);
    return;
}

int EhPrimo(int n){
    int i;
    for(i=2; i<=n/2;i++){
        if(!(n % i)){
            return FALSE;
        }
    }
    return TRUE;
}

void ObtemMaiorEMenorPrimo(int m, int n, int *menor, int *maior){
    int i,j,flagmenor = FALSE, flagmaior = FALSE;
    for(i = m, j = n; i <= n && j >= m; i++, j--){
        if(flagmenor && flagmaior){
            break;
        }
        if(EhPrimo(i) && !flagmenor){
            *menor = i;
            flagmenor = TRUE;
        }
        if(EhPrimo(j) && !flagmaior){
            *maior = j;
            flagmaior = TRUE;
        }
    }
    return;
}