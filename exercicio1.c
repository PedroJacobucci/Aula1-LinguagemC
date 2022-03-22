#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int numero1, numero2, soma;
	
	printf("Entre com o primeiro número: ");
	scanf("%d", &numero1);
	
	printf("Entre com o segundo número: ");
	scanf("%d", &numero2);
	
	soma = numero1 + numero2;
	printf("Valores entrados: %d e %d\n", numero1, numero2);
	printf("Soma = %d\n", soma);
	
	return 0;
}
