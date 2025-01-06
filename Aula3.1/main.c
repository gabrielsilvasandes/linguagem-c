#include <stdio.h>

int main() {
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite o nome: ");
	scanf("%s", &nome);
	
	printf("Dados informados:\n");
	printf("Idade: %d \n", idade);
	printf("Altura: %.2f \n", altura);
	printf("Nome: %s \n", nome);
}

