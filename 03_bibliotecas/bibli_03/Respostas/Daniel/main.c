#include "data.h"
#include <stdio.h>
int main(){
    int dia1, mes1, ano1, dia2, mes2, ano2;
    scanf("%d/%d/%d",&dia1, &mes1, &ano1);
    scanf("%d/%d/%d",&dia2, &mes2, &ano2);

    if(!verificaDataValida(dia1,mes1,ano1) || !verificaDataValida(dia2,mes2,ano2)){
        printf("A primeira e/ou segunda data(s) invalida(s)\n");
        return 0;
    }

    printf("Primeira Data: ");
    imprimeDataExtenso(dia1,mes1,ano1);
    printf("Segunda Data: ");
    imprimeDataExtenso(dia2,mes2,ano2);

    switch(comparaData(dia1, mes1, ano1, dia2, mes2, ano2)){
        case 1:{
            printf("A segunda data eh mais antiga\n");
            break;
        }
        case -1:{
            printf("A primeira data eh mais antiga\n");
            break;
        }
        case 1:{
            printf("As datas sa o iguais\n");
            break;
        }
    }

    printf("A diferenca em dias entre as datas eh: %d\n", calculaDiferencaDias(dia1, mes1, ano1, dia2, mes2, ano2));
    return 0;
}