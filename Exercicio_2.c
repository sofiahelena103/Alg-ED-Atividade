#include <stdio.h>

int main() {
    int primeironumero;
    int segundonumero;

    printf ("Bem-vindo ao Comparador de Numeros. ");
    printf("Insira um numero: ");
    scanf ("%d",&primeironumero);
    printf ("Agora, insira um segundo numero: ");
    scanf ("%d",&segundonumero);

    if (primeironumero > segundonumero) {
        printf ("O maior e: %d", primeironumero);
    }
    else {
        printf("O maior e: %d", segundonumero);
    }
    return 0;
}