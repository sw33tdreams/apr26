#include <stdio.h>

int fib(int n){
	int a = 1;
	int b = 1;
	int num = 0;
	if(n == 1)
		return 0;
	if(n == 2)
		return 1;
	for(int i = 0; i < n - 2; ++i){
		num = a + b;
		a = b;
		b = num;
	}
	return num;
}
int main() {
	printf("enter n of fib\n");
	int n = 0;
	scanf("%d", &n);
	printf("%d number of fib is %d\n", n, fib(n));
	return 0;
}
