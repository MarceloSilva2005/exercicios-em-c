/* Marcelo Henrique Silva - RA 19215 - Exercicio 46 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int i = 1;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-46 - Contar com do...while                             *\n************************************************************************\n\n");
    do { printf("%d\n", i); i++; } while (i <= 10);
    return 0;
}
