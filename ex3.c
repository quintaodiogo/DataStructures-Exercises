/*Leia o valor do raio de um círculo e calcule e imprima a área dele.*/

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float raio, area;
    // Define o valor de PI como constante
    const float PI = 3.14159;

    // Solicita ao usuário que insira o valor do raio
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    // Calcula a área da circunferência
    area = PI * raio * raio;

    // Imprime o resultado
    printf("A área da circunferência é: %.2f\n", area);

    return 0;
}