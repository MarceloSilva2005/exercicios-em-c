/* Marcelo Henrique Silva - RA 19215 - Exercicio 43 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int numero = 2, soma = 0;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-43 - Soma dos Pares                                    *\n************************************************************************\n\n");
    while (numero <= 100) { soma += numero; numero += 2; }
    printf("A soma dos pares entre 1 e 100 é %d.\n", soma);
    return 0;
}
