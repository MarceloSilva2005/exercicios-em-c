/* Marcelo Henrique Silva - RA 19215 - Exercicio 32 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int i;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-32 - Quadrados de 1 a 10                               *\n************************************************************************\n\n");
    for (i = 1; i <= 10; i++) printf("%d² = %d\n", i, i * i);
    return 0;
}
