/* Marcelo Henrique Silva - RA 19215 - Exercicio 14 */
#include <stdio.h>
#include <locale.h>

int main(void) {
    double a, b, c;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n");
    printf("* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n");
    printf("* Programa MHS-14 - Tipo de Triângulo                                 *\n");
    printf("************************************************************************\n\n");
    printf("Digite os três lados do triângulo: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
        printf("As medidas informadas não formam um triângulo.\n");
    else if (a == b && b == c) printf("Triângulo equilátero.\n");
    else if (a == b || a == c || b == c) printf("Triângulo isósceles.\n");
    else printf("Triângulo escaleno.\n");
    return 0;
}
