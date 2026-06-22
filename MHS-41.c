/* Marcelo Henrique Silva - RA 19215 - Exercicio 41 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int numero, divisor = 2, primo = 1;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-41 - Número Primo com while                            *\n************************************************************************\n\n");
    printf("Digite um número inteiro: ");
    if (scanf("%d", &numero) != 1) return 1;
    if (numero < 2) primo = 0;
    while (divisor <= numero / divisor && primo) {
        if (numero % divisor == 0) primo = 0;
        divisor++;
    }
    printf("%d %s um número primo.\n", numero, primo ? "é" : "não é");
    return 0;
}
