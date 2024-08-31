/*Escreva um programa que dadas duas coordenadas (x1, y1) e (x2, y2) de pontos
em R2, calcule sua distância*/

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float x1, y1, x2, y2, distancia;

    // Solicita ao usuário que insira as coordenadas dos pontos
    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calcula a distância entre os pontos
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Imprime o resultado
    printf("A distância entre os pontos é: %.2f\n", distancia);

    return 0;
}