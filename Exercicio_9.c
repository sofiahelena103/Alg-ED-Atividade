#include <stdio.h>

int main(){
    int n1 , mult[10];
    printf("Digite um numero: ");
    scanf("%d" , &n1);
    for (int i = 0; i < 10; ++i) {
        printf("%d x %d = %d\n" , n1 , i , n1*i);
    }}