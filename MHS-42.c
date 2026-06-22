/* Marcelo Henrique Silva - RA 19215 - Exercicio 42 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int numero, quantidade = 0, lidos = 0;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-42 - Quantidade de Ímpares                             *\n************************************************************************\n\n");
    while (lidos < 10) {
        printf("Digite o %dº número: ", lidos + 1);
        if (scanf("%d", &numero) != 1) return 1;
        if (numero % 2 != 0) quantidade++;
        lidos++;
    }
    printf("Foram digitados %d números ímpares.\n", quantidade);
    return 0;
}
