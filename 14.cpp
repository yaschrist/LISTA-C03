#include<iostream>
main() {
	int cont, numero;
	numero =1;
	while(numero%2 !=0) {
		printf("Digite um numero: ");
		scanf("%d", &numero);
	}
	for(cont=numero; cont >= 0; cont-=2) {
		printf("%d ", cont);
	}
}
