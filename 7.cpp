#include<iostream>
main() {
	float i, entrada, soma, media, contador;
	soma = 0;
	contador=0;
	i=1;
	while(i<=10){
		printf("Numero: ");
		scanf("%f", &entrada);
		if(entrada>0) {
			soma += entrada;
			contador++;
		}
		i++;
	}
	
	media = soma/contador;
	printf("Media: %.2f", media);
}
