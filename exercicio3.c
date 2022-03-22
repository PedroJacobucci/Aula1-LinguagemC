#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int base, altura, area, perimetro;
	
	printf("Digite o valor da base: ");
	scanf("%d", &base);
	
	printf("Digite o valor da altura: ");
	scanf("%d", &altura);
	
	area = base * altura;
	perimetro = 2*(base + altura);
	printf("Valores entrados: %d e %d\n", base, altura);
	printf("Área = %d\n", area);
	printf("Perimetro = %d\n", perimetro);
	
	return 0;
}
	
