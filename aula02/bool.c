//Estude bool.c  e explique como funciona o tipo de dado booleano e quais seriam possíveis utilidades num código

//O tipo de dado booleano é um tipo de dado que pode ter um de dois valores possíveis, geralmente indicados como true e false.
//Controle de fluxo: Booleanos são amplamente usados para determinar o que deve acontecer no código. Por exemplo, em um sistema que precisa verificar condições como se um sistema está funcionando corretamente, um booleano pode indicar o estado de erro ou sucesso.
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool emCrash = true; // Tipo logico (boolean)

    if(!emCrash) // Se não estiver em crash
        printf("Sistema OK!\n");
    else // Se estiver em crash
        printf("Sistema em CRASH.\n");

    return (0);
}