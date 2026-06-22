/* Marcelo Henrique Silva - RA 19215 - Exercicio 54 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int nivel;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-54 - Validar Número entre 1 e 5                        *\n************************************************************************\n\n");
    do {
        printf("Escolha um nível de 1 a 5: ");
        if (scanf("%d", &nivel) != 1) return 1;
        if (nivel < 1 || nivel > 5) printf("Nível inválido.\n");
    } while (nivel < 1 || nivel > 5);
    printf("Nível %d selecionado.\n", nivel);
    return 0;
}
