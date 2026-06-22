/* Marcelo Henrique Silva - RA 19215 - Exercicio 47 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int numero, i = 1;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-47 - Tabuada com do...while                            *\n************************************************************************\n\n");
    printf("Digite um número: ");
    if (scanf("%d", &numero) != 1) return 1;
    do { printf("%d x %d = %d\n", numero, i, numero * i); i++; } while (i <= 10);
    return 0;
}
