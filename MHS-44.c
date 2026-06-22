/* Marcelo Henrique Silva - RA 19215 - Exercicio 44 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    unsigned long long numero, copia;
    int digitos = 0;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-44 - Contar Dígitos                                    *\n************************************************************************\n\n");
    printf("Digite um número inteiro positivo: ");
    if (scanf("%llu", &numero) != 1) return 1;
    copia = numero;
    if (copia == 0) digitos = 1;
    while (copia > 0) { digitos++; copia /= 10; }
    printf("%llu possui %d dígito(s).\n", numero, digitos);
    return 0;
}
