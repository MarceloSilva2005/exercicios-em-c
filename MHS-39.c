/* Marcelo Henrique Silva - RA 19215 - Exercicio 39 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    double numero = 0;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-39 - Número Positivo                                   *\n************************************************************************\n\n");
    while (numero <= 0) {
        printf("Digite um número positivo: ");
        if (scanf("%lf", &numero) != 1) return 1;
        if (numero <= 0) printf("Valor inválido.\n");
    }
    printf("Número positivo aceito: %g\n", numero);
    return 0;
}
