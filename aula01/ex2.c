/*
Faça um programa que calcule a média, padrão UFG, de 3 números inteiros, sendo
que um desses números é 20 e os demais deverão ser digitados durante a
execução.
*/

#include <stdio.h>

int main()
{
    int nota1, nota2, nota3;
    float media;
    
    // Define o valor da Nota 1
    nota1 = 20;

    printf("Nota 1: %d\n", nota1);
    // Solicita ao usuário que insira o valor da Nota 2
    printf("Nota 2: ");
    scanf("%d", &nota2); 

    // Solicita ao usuário que insira o valor da Nota 3
    printf("Nota 3: ");
    scanf("%d", &nota3); 

    // Calcula a média das notas
    media = (nota1 + nota2 + nota3) / 3.0; 

    // Imprime a média
    printf("Media: %.1f\n", media);

    return 0;
}