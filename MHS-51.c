/* Marcelo Henrique Silva - RA 19215 - Exercicio 51 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int numero = 10;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-51 - Contagem Regressiva com do...while                *\n************************************************************************\n\n");
    do { printf("%d\n", numero); numero--; } while (numero >= 1);
    printf("Largada!\n");
    return 0;
}
