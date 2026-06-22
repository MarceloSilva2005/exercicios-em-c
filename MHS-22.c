/* Marcelo Henrique Silva - RA 19215 - Exercicio 22 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int numero;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-22 - Par ou Ímpar                                      *\n************************************************************************\n\n");
    printf("Digite um número inteiro: ");
    if (scanf("%d", &numero) != 1) return 1;
    printf("O número é %s.\n", numero % 2 == 0 ? "par" : "ímpar");
    return 0;
}
