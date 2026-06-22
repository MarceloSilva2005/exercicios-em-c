/* Marcelo Henrique Silva - RA 19215 - Exercicio 35 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int n, i;
    unsigned long long a = 0, b = 1, proximo;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-35 - Sequência de Fibonacci                            *\n************************************************************************\n\n");
    printf("Quantos termos deseja mostrar (1 a 94)? ");
    if (scanf("%d", &n) != 1) return 1;
    if (n < 1 || n > 94) { printf("Quantidade inválida.\n"); return 0; }
    for (i = 1; i <= n; i++) {
        printf("%llu%s", a, i == n ? "\n" : " ");
        proximo = a + b; a = b; b = proximo;
    }
    return 0;
}
