/*Elabore um programa que faça leitura de vários números inteiros, até que se digite
um número negativo. O programa deve mostrar todos os números digitados (sem
o negativo)*/

#include <stdio.h>
#include <windows.h>

#define MAX_NUMEROS 100

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int numeros[MAX_NUMEROS];
    int numero, count = 0;

    do {
        printf("Digite um número inteiro (negativo para sair): ");
        scanf("%d", &numero);

        if (numero >= 0) {
            // Armazena o número no vetor
            numeros[count] = numero;
            count++;
        }
    } while (numero >= 0 && count < MAX_NUMEROS);

    // Imprime os números armazenados
    printf("Números digitados:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}