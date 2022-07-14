#include<iostream>
main() {
	int x, menor, maior, numero;
	x=1;
	while(x<=10) {
		printf("Digite um numero: ");
		scanf("%d", &numero);
		if(x==1) {
			maior = numero;
			menor = numero;
		} else if (numero>maior) {
			maior = numero;
		} else if (numero<menor) {
			menor = numero;
		}
		x++;
	}
	
	printf("maior: %d\n", maior);
	printf("menor: %d\n", menor);
}
