/* Marcelo Henrique Silva - RA 19215 - Exercicio 33 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int i;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-33 - Múltiplos de 3                                    *\n************************************************************************\n\n");
    for (i = 3; i <= 30; i += 3) printf("%d%s", i, i == 30 ? "\n" : " ");
    return 0;
}
