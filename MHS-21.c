/* Marcelo Henrique Silva - RA 19215 - Exercicio 21 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    double numero;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-21 - Positivo ou Negativo                              *\n************************************************************************\n\n");
    printf("Digite um número: ");
    if (scanf("%lf", &numero) != 1) return 1;
    if (numero > 0) printf("O número é positivo.\n");
    else if (numero < 0) printf("O número é negativo.\n");
    else printf("O número é zero.\n");
    return 0;
}
