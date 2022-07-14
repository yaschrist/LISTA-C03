#include<iostream>
main() {
	int cont, numero;
	numero =1;
	while(numero%2 !=0) { //ele quer numero par, ent se for impar continuo
		printf("Digite um numero: ");
		scanf("%d", &numero);
	}
	for(cont=0; cont <= numero; cont +=2) {
		printf("%d ", cont);
	}
}
