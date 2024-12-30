#include <stdio.h>

int main(){
	
	float altura = 0.0;
	float peso = 0.0;
	
	printf("Digite sua Altura:\n");
	scanf("%f", &altura);
	
	printf("Digite seu Peso: [KG]\n");
	scanf("%f", &peso);
	
	printf("Peso informado: %f.\n", peso);
	printf("Altura informada: %f.\n", altura);
}
