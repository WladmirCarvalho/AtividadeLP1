int main() {
    int n;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero maior que zero.\n");
        return 1;
    }

    printf("Numeros de 1 a %d: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}