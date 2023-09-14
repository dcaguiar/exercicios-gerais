#include "data.h"
#include <stdio.h>

int verificaDataValida(int dia, int mes, int ano){
    if(dia >=1 && dia <= numeroDiasMes(mes,ano)){
        return 1;
    }
    else{
        return 0;
    }
}

void imprimeMesExtenso(int mes){
    switch(mes){
        case 1:{
            printf("Janeiro ");
            break;
        }
        case 2:{
            printf("Fevereiro ");
            break;
        }
        case 3:{
            printf("Marco ");
            break;
        }
        case 4:{
            printf("Abril ");
            break;
        }
        case 5:{
            printf("Maio ");
            break;
        }
        case 6:{
            printf("Junho ");
            break;
        }
        case 7:{
            printf("Julho ");
            break;
        }
        case 8:{
            printf("Agosto ");
            break;
        }
        case 9:{
            printf("Setembro ");
            break;
        }
        case 10:{
            printf("Outubro ");
            break;
        }
        case 11:{
            printf("Novembro ");
            break;
        }
        case 12:{
            printf("Dezembro ");
            break;
        }
        default:{
            printf("Mes Invalido\n");
            break;
        }
    }
}

void imprimeDataExtenso(int dia, int mes, int ano){
    printf("%02d de ", dia);
    imprimeMesExtenso(mes);
    printf("de %d\n", ano);
}

int verificaBissexto(int ano){
    int n;
    int resto;
    n = ano % 100;
    while(n >= 4){
        resto = n % 4;
        n = n/4;
    }
    if (resto == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int numeroDiasMes(int mes, int ano){
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        return 31;
    }
    else if(mes==4 || mes==6 || mes==9 || mes==11){
        return 30;
    }
    else if (mes==2){
        if(verificaBissexto(ano)){
            return 29;
        }
        else{
            return 28;
        }
    }
    else{
        return -1;
    }
}

int comparaData(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2){
    if((ano1 > ano2)||(ano1 == ano2 && mes1 > mes2)||(ano1 == ano2 && mes1 == mes2 && dia1 > dia2)){
        return 1;
    }
    else if((ano1 < ano2)||(ano1 == ano2 && mes1 < mes2)||(ano1 == ano2 && mes1 == mes2 && dia1 < dia2)){
        return -1;
    }
    else if(ano1 == ano2 && mes1 == mes2 && dia1 == dia2){
        return 0;
    }
}

int calculaDiasAteMes(int mes, int ano){
    int i, soma = 0;
    for(i = 0; i < mes; i++){
        soma += numeroDiasMes((i+1), ano);
    }
    return soma;
}

int calculaDiferencaDias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2){
    int dif_ano = 0, dif_mes = 0, dif_dias = 0, dif_total = 0, i;
    switch(comparaData(dia1, mes1, ano1, dia2, mes2, ano2)){
        case 0:{
            return 0;
            break;
        }
        case 1:{
            break;
        }
        case -1:{
            i = dia1; dia1 = dia2; dia2 = i;
            i = mes1; mes1 = mes2; mes2 = i;
            i = ano1; ano1 = ano2; ano2 = i;
        }
    }
   
    if(ano1 == ano2 && mes1 == mes2){
        dif_dias = dia1 - dia2;
    }
    else if(ano1 == ano2){
        if(dia1 >= dia2){
            for(i = mes2; i < mes1; i++){
                dif_mes += numeroDiasMes(i,ano2);
            }
            for(i=dia2; i<dia1; i++){
                dif_dias += 1;
            }
        }
        else{
            for(i = mes2; i < mes1-1; i++){
                dif_mes += numeroDiasMes(i,ano1);
            }
            for(i=dia2; i<numeroDiasMes(mes1-1,ano1); i++){
                dif_dias += 1;
            }
            for(i=0; i<dia1; i++){
                dif_dias += 1;
            }
        }
    }
    else{
        if(mes1 >= mes2){
            for(i = ano2; i < ano1; i++){
                dif_ano += 365;
                if(verificaBissexto(i)){
                    dif_ano += 1;
                }
            }
            if(dia1 >= dia2){
                for(i = mes2; i < mes1; i++){
                    dif_mes += numeroDiasMes(i,ano1);
                }
                for(i=dia2; i<dia1-1; i++){
                    dif_dias += 1;
                }
            }
            else{
                for(i = mes2; i < mes1-1; i++){
                    dif_mes += numeroDiasMes(i,ano1);
                }
                for(i=dia2; i<numeroDiasMes(mes1-1, ano1); i++){
                    dif_dias += 1;
                }
                for(i=0; i<dia1; i++){
                    dif_dias += 1;
                }
            }
        }
        else{
            for(i = ano2; i < ano1-1; i++){
                dif_ano += 365;
                if(verificaBissexto(i)){
                    dif_ano += 1;
                }
            }
            for(i=mes2; i<=12; i++){
                dif_mes += numeroDiasMes(i,ano1);
            }
            if(dia1 >= dia2){
                for(i = 1; i < mes1; i++){
                    dif_mes += numeroDiasMes(i,ano1);
                }
                for(i=dia2; i<dia1; i++){
                    dif_dias += 1;
                }
            }
            else{
                for(i = 1; i < mes1-1; i++){
                    dif_mes += numeroDiasMes(i,ano1);
                }
                for(i=dia2; i<numeroDiasMes(mes1-1, ano1); i++){
                    dif_dias += 1;
                }
                for(i=0; i<dia1; i++){
                    dif_dias += 1;
                }
            }
        }
    }
    
    dif_total = dif_ano + dif_mes + dif_dias;
    return dif_total;
}