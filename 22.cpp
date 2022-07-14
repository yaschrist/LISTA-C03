#include<iostream>
main() {
	int i, cont, entrada=10, soma, media;
	
	while(1){
		printf("Digite um numero: ");
		scanf("%d", &entrada);
		if (entrada>=10 && entrada<=20) {                                                                                                                                 
			soma += entrada;
			cont += 1;
		} else break;
	}
//	while(entrada>=10 && entrada<=20) {
//		printf("Digite um numero: ");
//		scanf("%d", &entrada);
//		soma += entrada;
//		cont += 1;
//	}
	
	media = soma/cont;
	printf("Media: %d", media);
}
