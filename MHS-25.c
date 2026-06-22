/* Marcelo Henrique Silva - RA 19215 - Exercicio 25 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    double media;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-25 - Notas e Aprovação                                 *\n************************************************************************\n\n");
    printf("Digite a média final (0 a 10): ");
    if (scanf("%lf", &media) != 1) return 1;
    if (media < 0 || media > 10) printf("Média inválida.\n");
    else if (media >= 7) printf("Aluno aprovado.\n");
    else if (media >= 5) printf("Aluno em recuperação.\n");
    else printf("Aluno reprovado.\n");
    return 0;
}
