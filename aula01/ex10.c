/*Elabore um programa que faça leitura de vários números inteiros,
até que se digite um número negativo. O programa tem que retornar o maior e o
menor número lido*/

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero, maior, menor, count = 0;

    printf("Digite um número inteiro (negativo para sair): ");
    scanf("%d", &numero);

    // Inicializa maior e menor com o primeiro número lido
    maior = numero;
    menor = numero;

    while (numero >= 0)
    {
        if (numero > maior)
        {
            maior = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }

        count++;

        printf("Digite um número inteiro (negativo para sair): ");
        scanf("%d", &numero);
    }

    // Imprime o maior e menor número
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}
