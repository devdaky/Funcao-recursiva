#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial nao existe para numeros negativos.\n");
    } else {
        printf("Fatorial de %d = %d\n", numero, fatorial(numero));
    }

    return 0;
}