#include <stdio.h>
#include <string.h>

void rev(char* arr,const int size){
	char temp = 0;
	int ind = 0;
	for(int i = 0; i <= size; ++i){
	       if(arr[i] == '\0'){
	       ind = i - 1;
	       break;
	       }
	}	       
	for(int i = 0, l = ind; i <= l; ++i, --l){
	temp = arr[i];
	arr[i] = arr[l];
	arr[l] = temp;
	}
}

int main() {
	char arr[25] = {};
	printf("enter a string\n");
	fgets(arr, 25, stdin);
	rev(arr, 25);
	puts(arr);
	return 0;
}



