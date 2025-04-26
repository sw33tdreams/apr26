#include <stdio.h>

int main(){
	int arr1[4] = {1, 2, 3, 4};
	int arr2[4] = {5, 6, 7, 8};
	for(int i = 0, l = 0; ;){
		if(i <= 3){
			printf("%d ", arr1[i]);
			++i;
		}else if(l <= 3){
			printf("%d ", arr2[l]);
		       ++l;	
		} else break;
	}
return 0;
}

