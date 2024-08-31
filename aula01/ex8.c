/*Faça um programa que escreva na tela de 0 até 9, utilizando as 3 estruturas
aprendidas nesta aula*/

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int i[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", i[j]);
    }
    printf("\n");

    int k = 0;

    while (i[k] < 10)
    {
        printf("%d\n", i[k]);
        k++;
    }

    printf("\n");

    k = 0;
    do
    {
        printf("%d\n", i[k]);
        k++;
    } while (i[k] < 10);

    return 0;
}