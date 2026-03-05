#include <stdio.h>

int main() {
   
   int n;
    printf("Digite um numero inteiro nao negativo N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um numero maior ou igual a zero.\n");
        return 1;
    }

    int contador = 1;
    for (int i = n; i >= 1; i--) {
        contador = contador * i;   
    }

    printf("O fatorial de %d e: %d\n", n, contador);


    return 0;
}





