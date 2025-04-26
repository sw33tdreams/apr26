#include <stdio.h>

int main() {
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {6, 7, 8, 9, 10};
	for(int i = 4, l = 4; ;){
		if(i >= 0){
			printf("%d ", arr1[i]);
			--i;
		}else if(l >= 0){
			printf("%d ", arr2[l]);
			--l;
		}else break;
	}
return 0;
}


