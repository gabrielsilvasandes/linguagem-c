#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	int A, B, soma, sub, mult, div;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &A);
	printf("Digite o segundo valor: ");
	scanf("%d", &B);
	
	soma = A + B;
	sub = A - B;
	mult = A * B;
	div = A / B;
	
	printf("Resultados:\n");
	printf("Soma: %d\n", soma);
	printf("Subtra��o: %d\n", sub);
	printf("Multiplica��o: %d\n", mult);
	printf("Divis�o: %d\n", div);
	
}

