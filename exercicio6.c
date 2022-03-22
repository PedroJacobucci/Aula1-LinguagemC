#include <stdio.h>
#include <locale.h>

double main() {
	
	setlocale(LC_ALL, "Portuguese");
	double celsius, fahrenheit;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%lf", &celsius);
	
	fahrenheit = (1.8 * celsius) + 32;
	printf("Valor da temperatura em fahrenheit = %.1f\n", fahrenheit);
	
	return 0;
}
	
