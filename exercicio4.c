#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int porcentagem;
	double salarioAtual, salarioNovo;
	
	printf("Digite o sálario atual: ");
	scanf("%lf", &salarioAtual);
	
	printf("Digite a porcentagem de aumento: ");
	scanf("%d", &porcentagem);
	
	salarioNovo = ((salarioAtual * porcentagem)/100)+(salarioAtual);
	printf("Valores entrados: %.2f e %d\n", salarioAtual, porcentagem);
	printf("Sálario novo = %.2f", salarioNovo);
	
	return 0;
}
	
