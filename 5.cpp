#include<iostream>
main() {
	int i=1,soma=0, entrada=0;
	while(i<=10) {
		printf("Número: ");
		scanf("%d",&entrada);
		soma += entrada;
		i++;
	}
	printf("Soma: %d", soma);
}
