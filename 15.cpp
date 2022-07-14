#include<iostream>
main() {
	int cont, numero;
	numero =0;
	while(numero%2 ==0) { //enquanto for par, repita pois quero impar
		printf("Digite um numero: ");
		scanf("%d", &numero);
	}
	for(cont=1; cont <= numero; cont +=2) {
		printf("%d ", cont);
	}
}
