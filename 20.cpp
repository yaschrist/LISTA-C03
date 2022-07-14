#include<iostream>
main() {
	int n;
	while(n != 1000) {
		printf("Numero: ");
		scanf("%d",&n);
		if(n%2 == 0) printf("par\n");
		else printf("impar\n");
	}
}
