/*Fazer um programa que ao entrar com sua idade diga se você é maior de idade ou
não*/

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int idade;

    // Solicita ao usuário que insira sua idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Verifica se a idade é maior ou igual a 18
    if (idade >= 18)
    {
        printf("Você é maior de idade\n");
    }
    else
    {
        printf("Você é menor de idade\n");
    }

    return 0;
}