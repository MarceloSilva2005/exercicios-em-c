/* Marcelo Henrique Silva - RA 19215 - Exercicio 27 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int numero, i;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-27 - Tabuada com for                                   *\n************************************************************************\n\n");
    printf("Digite um número: ");
    if (scanf("%d", &numero) != 1) return 1;
    for (i = 1; i <= 10; i++) printf("%d x %d = %d\n", numero, i, numero * i);
    return 0;
}
