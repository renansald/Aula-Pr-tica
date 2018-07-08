#include <stdio.h>
#include <stdlib.h>

struct Alunos{
char nome[51];
double notas[3];
};

void preenche(struct Alunos aluno[2]){
for(int a = 0; a < 2; a++){
    printf ("Informe o nome do %d aluno: ", a+1);
    scanf (" %[^\n]s", &aluno[a].nome);
    for (int b = 0; b < 3; b++){
        printf ("Informe a nota %d do %d aluno: ", b+1, a+1);
        scanf ("%d", &aluno[a].notas[b]);
    }
}
}

void imprime(struct Alunos aluno[2]){
double soma = 0.0;
for(int a = 0; a < 2; a++){

    for (int b = 0; b < 3; b++){
        soma = soma + aluno[a].notas[b];
    }
if (soma >= 6){
    printf ("\nO aluno %s foi aprovado", aluno[a].nome);
}
else{
    printf ("\nO aluno %s foi reprovado", aluno[a].nome);
}
soma = 0.0;
}
}


int main (){
struct Alunos aluno1[2];
preenche (aluno1);
imprime(aluno1);
return 0;
}
