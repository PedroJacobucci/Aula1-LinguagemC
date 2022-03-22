#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int lado, area;
	
	printf("Digite o primeiro lado do quadrado: ");
	scanf("%d", &lado);
	
	area = lado * lado;
	printf("Valores entrados: %d ", lado);
	printf("Area = %d ", area);
	
	return 0;
}
