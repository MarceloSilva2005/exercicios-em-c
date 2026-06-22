/* Marcelo Henrique Silva - RA 19215 - Exercicio 28 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int i, soma = 0;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-28 - Soma dos 100 Primeiros Naturais                   *\n************************************************************************\n\n");
    for (i = 1; i <= 100; i++) soma += i;
    printf("A soma de 1 até 100 é %d.\n", soma);
    return 0;
}
