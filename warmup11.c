#include <stdio.h>

void axyusak(int n){
	for(int i = 1; i <= n; ++i){
		printf("%d * %d = %d\n", i, n, i * n);
	
	}}
int main() {
	printf("enter one int\n");
	int n = 0;
	scanf("%d", &n);
	axyusak(n);
	return 0;
}

