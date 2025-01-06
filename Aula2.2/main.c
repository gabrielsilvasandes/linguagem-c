#include <stdio.h>

int main() {
	
	int idade = 0;
	float peso = 0.0;
	
	printf("Digite uma idade: ");
	scanf("%d", &idade);
	
	printf("Digite um peso: ");
	scanf("%f", &peso);
	
	printf("Idade informada: %d\n", idade);
	printf("Peso informado: %f\n", peso);
}

