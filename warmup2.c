#include <stdio.h>

int main() {
	int arr[10] = {};
	int mijin = 0;
	printf("enter 10 integers \n");
	for(int i = 0; i <= 9; ++i){
		scanf("%d", &arr[i]);
		mijin = mijin + arr[i];
	}
	printf("mijin tvabanakan is %d\n", mijin / 10);
	return 0;
}
