#include<iostream>
main() {
	int i;
	i = 1;
	while (i<=100) {
		printf("%d ", i);
		i++;
	}
	printf("\n\n");
	
	i=1;
	do{
		printf("%d ", i);
		i++;
	}while (i<=100);
	printf("\n\n");
	
	//for <inicio>; <fim>; <incremento>
	//incrementa, testa e exibe
	for(i=1; i<=100; i++) {
		printf("%d ", i);
	}
}
