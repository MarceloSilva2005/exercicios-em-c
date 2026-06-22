/* Marcelo Henrique Silva - RA 19215 - Exercicio 49 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int senha;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-49 - Pedir Senha até Acertar                           *\n************************************************************************\n\n");
    do {
        printf("Digite a senha: ");
        if (scanf("%d", &senha) != 1) return 1;
        if (senha != 1111) printf("Senha incorreta.\n");
    } while (senha != 1111);
    printf("Acesso liberado!\n");
    return 0;
}
