/* Marcelo Henrique Silva - RA 19215 - Exercicio 50 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    double numero;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-50 - Número Positivo Obrigatório                       *\n************************************************************************\n\n");
    do {
        printf("Digite um número positivo: ");
        if (scanf("%lf", &numero) != 1) return 1;
        if (numero <= 0) printf("Valor inválido.\n");
    } while (numero <= 0);
    printf("Valor aceito: %g\n", numero);
    return 0;
}
