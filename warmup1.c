#include <stdio.h>

int main() {
	int arr1[10] = {};
	int arr2[10] = {};
	printf("enter 10 elements of first array\n");
	for(int i = 0; i <= 9; ++i){
		scanf("%d", &arr1[i]);
	}
	printf("enter 10 elements of second array\n");
	for(int i = 0; i <= 9; ++i){
		scanf("%d", &arr2[i]);
	}
	for(int i = 0; i <= 9; ++i){
		printf("%d\n", arr1[i] * arr2[i]);
	}
	return 0;
}
