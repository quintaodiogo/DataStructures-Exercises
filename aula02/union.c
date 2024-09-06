// Estude union.c  e explique como funciona uma união e qual a diferença dela comparada com uma estrutura struct
#include <stdio.h>

// Uma unica variavel que representa multipos tipos de dados
//Uma união é um tipo de dado que permite armazenar diferentes tipos de dados no mesmo local de memória, porém, em momentos diferentes. 

//Diferença entre union e struct
// Memória Compartilhada (union) vs Memória Separada (struct):

// Na união, todos os membros compartilham o mesmo local na memória. Ou seja, o tamanho da união é o do maior membro, e os dados de diferentes membros podem sobrepor-se.
// Em uma estrutura, cada membro tem seu próprio espaço de memória, e o tamanho da estrutura é a soma do tamanho de todos os membros.
// Uso de Múltiplos Membros:

// Na união, só é possível armazenar e acessar um membro por vez.
// Na estrutura, você pode armazenar e acessar vários membros simultaneamente.
union Data
{
    int intN;
    float floatF;
} data;

int main()
{
    union Data data;

    data.intN = 5;
    data.floatF = 3.4;

    printf("%d\n", data.intN); // Resultado imprevisível
    printf("%f\n", data.floatF); // Mostra 3.400000

    return (0);
}
