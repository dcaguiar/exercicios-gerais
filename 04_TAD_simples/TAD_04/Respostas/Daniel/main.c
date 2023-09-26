#include <stdio.h>
#include "aluno.h"

int main(){
    int n,i,j;
    scanf("%d", &n);
    tAluno aluno[n], salvo;
    for(i=0;i<n;i++){
        aluno[i] = LeAluno();
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(ComparaMatricula(aluno[i], aluno[j]) > 0){
                salvo = aluno[i];
                aluno[i] = aluno[j];
                aluno[j] = salvo;
            }
        }
    }
    for(i=0;i<n;i++){
        if(VerificaAprovacao(aluno[i])){
            ImprimeAluno(aluno[i]);
        }
    }
}