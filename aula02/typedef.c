#include <stdio.h>
#define TAM 40
// Redefinindo os tipos float e int
typedef float nota;
typedef int   inteiro;

struct tAluno {
    inteiro matricula;
    nota prova1;
    nota prova2;
};

// Redefinindo uma struct (encurta o comando na declaracao)
typedef struct tAluno tAluno;

int main(void) {
    tAluno aluno [TAM];
    nota media[TAM];
    inteiro i;
  do {
    printf("Informe o numero de matricula: ");
    scanf("%d", &aluno[i].matricula);
    printf("Informe a nota da primeira prova: ");
    scanf("%f", &aluno[i].prova1);
    printf("Informe a nota da segunda prova: ");
    scanf("%f", &aluno[i].prova2);

    media[i] = (aluno[i].prova1  + aluno[i].prova2) / 2;
  } while (i++ < TAM);
    
    for(i = 0; i < TAM; i++){
        printf("\nMatricula.....: %d\n", aluno[i].matricula);
        printf("Media do aluno: %.1f\n", media[i]);
    }
    return(0);
}