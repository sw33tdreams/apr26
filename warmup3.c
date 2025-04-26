#include <stdio.h>

int main() {
	int arr[10] = {};
	int tiv = 0;
	int count = 0;
	printf("enter number to be found\n");
	scanf("%d", &tiv);
	printf("enter 10 integers for array\n");
	for(int i = 0; i <= 9; ++i){
		scanf("%d", &arr[i]);
		if(arr[i] == tiv){
			count = 1;
		}
	}
	if(count == 1){
		printf("YES\n");
	}else printf("NO\n");
	return 0;
}
