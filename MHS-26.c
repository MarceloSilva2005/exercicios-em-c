/* Marcelo Henrique Silva - RA 19215 - Exercicio 26 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int i;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-26 - Contar de 1 a 10 com for                          *\n************************************************************************\n\n");
    for (i = 1; i <= 10; i++) printf("%d\n", i);
    return 0;
}
