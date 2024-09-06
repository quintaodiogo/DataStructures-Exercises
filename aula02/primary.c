/*Mostre o tamanho para cada tipo de dado primário em primary.c:*/

#include <stdio.h>

int main()
{
    unsigned char uchar;
    signed char schar; 
    double n1;
    long double n2;
    unsigned int n3;
    signed int n4;
    short n5;
    long n6;
    long long n7;
    void;

    /* Tamanho do tipo de dado
       %lu: usado para valores 'unsigned long'
       %zu: usado para valores 'size_t' (unsigned long)
    */ 

    printf("Tamanho do uchar    : %zu bytes\n", sizeof(uchar));
    printf("Tamanho do schar    : %zu bytes\n", sizeof(schar));
    printf("Tamanho do double   : %zu bytes\n", sizeof(n1));
    printf("Tamanho do ldouble  : %lu bytes\n", sizeof(n2));
    printf("Tamanho do uint     : %zu bytes\n", sizeof(n3));
    printf("Tamanho do sint     : %zu bytes\n", sizeof(n4));
    printf("Tamanho do short    : %zu bytes\n", sizeof(n5));
    printf("Tamanho do long     : %zu bytes\n", sizeof(n6));
    printf("Tamanho do long long: %zu bytes\n", sizeof(n7));
    printf("Tamanho do void     : %zu bytes\n", sizeof(void()));
    printf("Tamanho do size_t   : %zu bytes\n", sizeof(size_t));
    return 0;
}