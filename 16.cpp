#include<iostream>
main() {
	int cont, numero;
	numero =0;
	while(numero%2 ==0) {
		printf("Digite um numero: ");
		scanf("%d", &numero);
	}
	for(cont=numero; cont >= 1; cont-=2) {
		printf("%d ", cont);
	}
}
