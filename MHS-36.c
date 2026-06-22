/* Marcelo Henrique Silva - RA 19215 - Exercicio 36 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int i = 1;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-36 - Contar de 1 a 10 com while                        *\n************************************************************************\n\n");
    while (i <= 10) { printf("%d\n", i); i++; }
    return 0;
}
