#include <stdio.h>
#include "aluno.h"
#define MAX 50

tAluno CriaAluno(char *nome, int matricula, int n1, int n2, int n3){
    tAluno aluno;
    sprintf(aluno.nome, "%s", nome);
    aluno.matricula = matricula;
    aluno.n1 = n1;
    aluno.n2 = n2;
    aluno.n3 = n3;
    return aluno;
}
tAluno LeAluno(){
    char nome[MAX];
    int matricula, n1, n2, n3;
    scanf("%*[^a-zA-Z]");
    scanf("%[^\n]", nome);
    scanf("%d%d%d%d", &matricula, &n1, &n2, &n3);
    return CriaAluno(nome, matricula, n1, n2, n3);
}
int ComparaMatricula(tAluno aluno1, tAluno aluno2){
    if(aluno1.matricula > aluno2.matricula){
        return 1;
    }
    else if(aluno1.matricula < aluno2.matricula){
        return -1;
    }
    else{
        return 0;
    }
}
int CalculaMediaAluno(tAluno aluno){
    return ((aluno.n1+aluno.n2+aluno.n3)/3);
}
int VerificaAprovacao(tAluno aluno){
    if(CalculaMediaAluno(aluno) >= 7){
        return 1;
    }
    else return 0;
}
void ImprimeAluno(tAluno aluno){
    printf("%s\n", aluno.nome);
}