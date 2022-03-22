#include <stdio.h>
#include <locale.h>

double main() {
	
	setlocale(LC_ALL, "Portuguese");
	double fahrenheit, celsius;
	
	printf("Digite a temperatura em fahrenheit: ");
	scanf("%lf", &fahrenheit);
	
	celsius = (fahrenheit - 32)/1.8;
	printf("Conversão em Celsius = %.1f\n", celsius);
	
	return 0;
}
	
