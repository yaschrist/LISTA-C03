#include<iostream>
main() {
	int i, a, b;
	printf("Número: ");
	scanf("%d", &a);
	b=a;
	while(i<=b) {
		printf("%d ",a);
		a--;
		i++;
	}
}
