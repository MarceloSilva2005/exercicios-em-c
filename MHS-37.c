/* Marcelo Henrique Silva - RA 19215 - Exercicio 37 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    double numero, soma = 0;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-37 - Soma até Digitar Zero                             *\n************************************************************************\n\n");
    printf("Digite números para somar (0 encerra): ");
    if (scanf("%lf", &numero) != 1) return 1;
    while (numero != 0) {
        soma += numero;
        printf("Próximo número: ");
        if (scanf("%lf", &numero) != 1) return 1;
    }
    printf("Soma total: %g\n", soma);
    return 0;
}
