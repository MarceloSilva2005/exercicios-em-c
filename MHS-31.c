/* Marcelo Henrique Silva - RA 19215 - Exercicio 31 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int i;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-31 - Contagem Regressiva                               *\n************************************************************************\n\n");
    for (i = 10; i >= 1; i--) printf("%d\n", i);
    printf("Largada!\n");
    return 0;
}
