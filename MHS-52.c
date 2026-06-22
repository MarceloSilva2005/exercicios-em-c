/* Marcelo Henrique Silva - RA 19215 - Exercicio 52 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int numero, soma = 0;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-52 - Soma até Múltiplo de 10                           *\n************************************************************************\n\n");
    do {
        printf("Digite um número: ");
        if (scanf("%d", &numero) != 1) return 1;
        soma += numero;
    } while (numero % 10 != 0);
    printf("Soma total: %d\n", soma);
    return 0;
}
