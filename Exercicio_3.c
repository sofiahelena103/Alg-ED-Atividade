#include <stdio.h>

int main() {
    int n1;
    int n2;
    int n3;
    float media;
    printf("Escolha um numero: ");
    scanf("%d", &n1);
    printf("Escolha outro numero: ");
    scanf("%d", &n2);
    printf("Escolha um numero: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("sua media e: %.2f\n", media);
    return 0;
}