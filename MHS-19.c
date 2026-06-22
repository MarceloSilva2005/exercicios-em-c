/* Marcelo Henrique Silva - RA 19215 - Exercicio 19 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    double a, b, c, troca;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-19 - Ordem Crescente                                   *\n************************************************************************\n\n");
    printf("Digite três números: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;
    if (a > b) { troca = a; a = b; b = troca; }
    if (a > c) { troca = a; a = c; c = troca; }
    if (b > c) { troca = b; b = c; c = troca; }
    printf("Ordem crescente: %g, %g, %g\n", a, b, c);
    return 0;
}
