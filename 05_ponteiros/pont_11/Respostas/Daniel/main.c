#include <stdio.h>
#include "calculadora.h"

float Adicao(float num1, float num2){
    return (num1 + num2);
}

float Subtracao(float num1, float num2){
    return (num1 - num2);
}

float Multiplicacao(float num1, float num2){
    return (num1 * num2);
}

float Divisao(float num1, float num2){
    return (num1 / num2);
}

int main(){
    char operacao = '\0';
    float num1, num2, resultado;

    while(operacao != 'f'){
        scanf("%c%f%f\n", &operacao, &num1, &num2);

        //printf("%c %f %f", operacao, num1, num2);

        switch(operacao){
            case 'a':{
                resultado = Calcular(num1, num2, Adicao);
                printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            }
            case 's':{
                resultado = Calcular(num1, num2, Subtracao);
                printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            }
            case 'm':{
                resultado = Calcular(num1, num2, Multiplicacao);
                printf("%.2f x %.2f = %.2f\n", num1, num2, resultado);
                break;
            }
            case 'd':{
                resultado = Calcular(num1, num2, Divisao);
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
                break;
            }
        }
    }
    return 0;
}