/* Marcelo Henrique Silva - RA 19215 - Exercicio 34 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int numero, i, primo = 1;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-34 - Número Primo com for                              *\n************************************************************************\n\n");
    printf("Digite um número inteiro: ");
    if (scanf("%d", &numero) != 1) return 1;
    if (numero < 2) primo = 0;
    for (i = 2; i <= numero / i && primo; i++) if (numero % i == 0) primo = 0;
    printf("%d %s um número primo.\n", numero, primo ? "é" : "não é");
    return 0;
}
