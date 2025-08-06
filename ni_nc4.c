#include <stdio.h>

int main(){

    int idade;
    int quantidade = 1;
    float altura;
    float peso;
    char opcao;
    char nome[20];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.25f\n", altura);

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Seu peso é %.3f\n", peso);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);



}