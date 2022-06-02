#include<iostream>
main() {
	float i, numero, soma, media;
	i=1;
	while (i<=10) {
		printf("Digite um número: ");
		scanf("%f", &numero);
		soma += numero;
		i++;
	}
	media = soma/i;
	printf("Media: %.2f", media);
}
