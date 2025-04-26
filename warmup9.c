#include <stdio.h>

int term(int far){
	return ((far - 32) * 5 / 9);
	}
int main() {
	int far = 0;
	printf("enter term in far\n");
	scanf("%d", &far);
	printf("in celsius:%d\n", term(far));
	return 0;
}
