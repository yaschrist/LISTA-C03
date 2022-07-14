#include<iostream>
main() {
	int entrada, i=1, cont=1, soma=0;
	printf("Entrada: ");
	scanf("%d", &entrada);
	while(i<=entrada){
		soma += cont;
		cont++;
		i++;
	}
	printf("Soma: %d",soma);
}
