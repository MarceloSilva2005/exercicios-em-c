/* Marcelo Henrique Silva - RA 19215 - Exercicio 38 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int senha = 0;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-38 - Senha Correta                                     *\n************************************************************************\n\n");
    while (senha != 1234) {
        printf("Digite a senha: ");
        if (scanf("%d", &senha) != 1) return 1;
        if (senha != 1234) printf("Senha incorreta. Tente novamente.\n");
    }
    printf("Acesso liberado!\n");
    return 0;
}
