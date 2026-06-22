/* Marcelo Henrique Silva - RA 19215 - Exercicio 58 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    double a, b;
    char operacao;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-58 - Calculadora de 4 Operações                        *\n************************************************************************\n\n");
    printf("Digite o primeiro número: ");
    if (scanf("%lf", &a) != 1) return 1;
    printf("Digite a operação (+, -, * ou /): ");
    if (scanf(" %c", &operacao) != 1) return 1;
    printf("Digite o segundo número: ");
    if (scanf("%lf", &b) != 1) return 1;
    switch (operacao) {
        case '+': printf("Resultado: %g\n", a + b); break;
        case '-': printf("Resultado: %g\n", a - b); break;
        case '*': printf("Resultado: %g\n", a * b); break;
        case '/': if (b == 0) printf("Não é possível dividir por zero.\n"); else printf("Resultado: %g\n", a / b); break;
        default: printf("Operação matemática não reconhecida\n");
    }
    return 0;
}
