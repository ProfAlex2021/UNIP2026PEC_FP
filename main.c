#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcao.c"
#include "procedimento.c"

int num;

int main()
{
    int v_dobro, v_proximo;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe um número: ");
    scanf("%i", &num);

    v_dobro = dobro(num);
    v_proximo = proximo();

    printf("\nO dobro de %i é %i", num, v_dobro);
    printf("\nO número original é %i", num);
    printf("\nO próximo número é %i", v_proximo);

    quadrado(num);
    anterior();

    return 0;
}
