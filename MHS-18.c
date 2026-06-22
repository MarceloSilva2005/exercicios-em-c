/* Marcelo Henrique Silva - RA 19215 - Exercicio 18 */
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(void) {
    char usuario[40], senha[40];
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-18 - Login Simples                                     *\n************************************************************************\n\n");
    printf("Usuário: ");
    if (scanf("%39s", usuario) != 1) return 1;
    printf("Senha: ");
    if (scanf("%39s", senha) != 1) return 1;
    if (strcmp(usuario, "aluno") == 0 && strcmp(senha, "1234") == 0)
        printf("Acesso permitido.\n");
    else printf("Acesso negado.\n");
    return 0;
}
