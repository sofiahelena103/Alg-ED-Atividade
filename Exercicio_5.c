#include <stdio.h>

struct Pessoa {
    char nome[20];
    int idade;
    float altura;
};

int main() {
    struct Pessoa p1;
    printf("Nome: ");
    scanf("%s", &p1.nome);

    printf("Idade: ");
    scanf("%d", &p1.idade);

    printf("Altura: ");
    scanf("%f", &p1.altura);

    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n", p1.altura);

    return 0;
}