#include "aluno.h"
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    tAluno *alunos[n], *salvo;
    for(int i = 0; i < n; i++){
        alunos[i] = CriaAluno();
        LeAluno(alunos[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(ComparaMatricula(alunos[i], alunos[j]) == 1){
                salvo = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = salvo;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(VerificaAprovacao(alunos[i])){
            ImprimeAluno(alunos[i]);
        }

    }
    for(int i = 0; i < n; i++){
        ApagaAluno(alunos[i]);
    }
    return 0;
}