#include <stdio.h>
int maior(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("O maior numero e: %d\n", maior(num1, num2));

    return 0;
}