/* Marcelo Henrique Silva - RA 19215 - Exercicio 60 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int dia;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-60 - Validador de Dias Úteis                           *\n************************************************************************\n\n");
    printf("Digite o número do dia (1 a 7): ");
    if (scanf("%d", &dia) != 1) return 1;
    switch (dia) {
        case 2: case 3: case 4: case 5: case 6:
            printf("Dia Útil. Acesso liberado para o trabalho.\n"); break;
        case 1: case 7:
            printf("Fim de Semana. Prédio fechado.\n"); break;
        default:
            printf("Número de dia inválido.\n");
    }
    return 0;
}
