/*Fazer um programa que mostre o código ASCII correspondente aos caracteres
gamer WASD.*/

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    // Declaração dos caracteres
    char w = 'W';
    char a = 'A';
    char s = 'S';
    char d = 'D';

    // Imprime o código ASCII de cada caractere
    printf("O código ASCII de %c é %d\n", w, w);
    printf("O código ASCII de %c é %d\n", a, a);
    printf("O código ASCII de %c é %d\n", s, s);
    printf("O código ASCII de %c é %d\n", d, d);

    return 0;
}