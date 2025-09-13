#include <stdio.h>
int main(){
    
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Sua idade: ");
    scanf("%d", &idade);

    printf("Sua altura: ");
    scanf("%f", &altura);

    printf("Seu nome: ");
    scanf("%s", nome);

    printf("Sua matricula: ");
    scanf("%d", &matricula);

    printf("\nNome do aluno: %s - Matrícula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %.2f\n\n", idade, altura);
    printf("");
}