/*Fazer um programa que calcule a média de 3 notas. Caso a média seja igual ou
superior a 6, o aluno estará aprovado, caso contrário, estará reprovado.*/

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    float nota1, nota2, nota3, media;

    // Solicita ao usuário que insira as notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média das notas
    media = (nota1 + nota2 + nota3) / 3.0;

    // Verifica se a média é maior ou igual a 6
    if (media >= 6.0)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado\n");
    }

    return 0;
}