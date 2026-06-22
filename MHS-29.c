/* Marcelo Henrique Silva - RA 19215 - Exercicio 29 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int i;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-29 - Números Pares de 0 a 50                           *\n************************************************************************\n\n");
    for (i = 0; i <= 50; i += 2) printf("%d%s", i, i == 50 ? "\n" : " ");
    return 0;
}
