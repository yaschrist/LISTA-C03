#include<iostream>
main() {
	int numero, un, dez, cen;
	while(numero<100 || numero>999) {
		printf("Digite um numero: ");
		scanf("%d", &numero);
	}
	cen = numero/100;
	dez = (numero%100)/10;
	un = (numero%100)%10;
	printf("Algarismos: %d e %d e %d", cen, dez, un);
}
