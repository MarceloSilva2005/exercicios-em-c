/* Marcelo Henrique Silva - RA 19215 - Exercicio 23 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    double a, b;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-23 - Maior de Dois Números                             *\n************************************************************************\n\n");
    printf("Digite dois números: ");
    if (scanf("%lf %lf", &a, &b) != 2) return 1;
    if (a > b) printf("O maior número é %g.\n", a);
    else if (b > a) printf("O maior número é %g.\n", b);
    else printf("Os números são iguais.\n");
    return 0;
}
