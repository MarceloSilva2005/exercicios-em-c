/* Marcelo Henrique Silva - RA 19215 - Exercicio 20 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int ano;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-20 - Ano Bissexto                                      *\n************************************************************************\n\n");
    printf("Digite um ano: ");
    if (scanf("%d", &ano) != 1) return 1;
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) printf("%d é um ano bissexto.\n", ano);
    else printf("%d não é um ano bissexto.\n", ano);
    return 0;
}
