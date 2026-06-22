/* Marcelo Henrique Silva - RA 19215 - Exercicio 24 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int idade;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-24 - Pode Votar?                                       *\n************************************************************************\n\n");
    printf("Digite sua idade: ");
    if (scanf("%d", &idade) != 1) return 1;
    if (idade < 0) printf("Idade inválida.\n");
    else if (idade >= 16) printf("Você pode votar.\n");
    else printf("Você ainda não pode votar.\n");
    return 0;
}
