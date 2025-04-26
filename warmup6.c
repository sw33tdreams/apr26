#include <stdio.h>

int main() {
	int arr1[10] = {};
	int arr2[10] = {};
	printf("enter 10 integers for first array\n");
	for(int i = 0; i <= 9; ++i){
	       scanf("%d", &arr1[i]);
	}
	printf("enter 10 integers for second array\n");
	for(int i = 0; i <= 9; ++i){
		scanf("%d", &arr2[i]);
	if(arr1[i] != arr2[i]){
		printf("they are NOT equal!!!\n");
		return 0;
	}
	}
	printf("ther are equal\n");
	return 0;
	}
