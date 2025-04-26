#include <stdio.h>

int gumar(int n){
	int res = 0;
	for(int i = 10, l = 1; i <= 10000000; i *= 10, l *= 10){
		res = res + ((n % i) / l);
	}
		return res;
	}

	int main() {
		printf("enter number\n");
		int num = 0;
		scanf("%d", &num);
		printf("tvanshanneri gumar is %d\n", gumar(num));
		return 0;
	}
