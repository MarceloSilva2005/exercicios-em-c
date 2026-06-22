/* Marcelo Henrique Silva - RA 19215 - Exercicio 55 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    double numero, maior = 0;
    int possuiValor = 0;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-55 - Mostrar o Maior                                   *\n************************************************************************\n\n");
    do {
        printf("Digite um número positivo (negativo encerra): ");
        if (scanf("%lf", &numero) != 1) return 1;
        if (numero >= 0 && (!possuiValor || numero > maior)) { maior = numero; possuiValor = 1; }
    } while (numero >= 0);
    if (possuiValor) printf("O maior número informado foi %g.\n", maior);
    else printf("Nenhum número positivo foi informado.\n");
    return 0;
}
