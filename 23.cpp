#include<iostream>
main() {
	int n, i=1;
	printf("Digite um numero: ");
	scanf("%d", &n);
	printf("Divisores: ");
	while(i<=n){
		if(n%i == 0) {
			printf("%d ", i);
		}
		i++;
	}
}
