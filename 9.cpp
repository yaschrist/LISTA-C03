#include<iostream> 
main() {
	int i, entrada, a;
	i=1;
	a=1;
	scanf("%d", &entrada);
	while(i<=entrada) {
		printf("%d ", a);
		a+=2;
		i++;
	}
}
