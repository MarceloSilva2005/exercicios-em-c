/* Marcelo Henrique Silva - RA 19215 - Exercicio 30 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int numero, i;
    unsigned long long fatorial = 1;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-30 - Fatorial de um Número                             *\n************************************************************************\n\n");
    printf("Digite um número inteiro entre 0 e 20: ");
    if (scanf("%d", &numero) != 1) return 1;
    if (numero < 0 || numero > 20) printf("Valor inválido. Use um número entre 0 e 20.\n");
    else {
        for (i = 2; i <= numero; i++) fatorial *= (unsigned long long)i;
        printf("%d! = %llu\n", numero, fatorial);
    }
    return 0;
}
