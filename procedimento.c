#include <stdio.h>

extern int num;

void quadrado(int a)
{
    printf("\nO quadrado de %i é %i", a, a * a);
    return;
}

void anterior()
{
    printf("\nO número anterior é %i", num-1);
}
