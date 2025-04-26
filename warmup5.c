#include <stdio.h>
#include <string.h>

int main() {
	char arr[25] = {};
	fgets(arr, 25, stdin);
	for(int i = 0; i <= 24; ++i){
		if(arr[i] >= 97 && arr[i] <= 122){
			arr[i] = arr[i] - 32;
		}
	}
	fputs(arr, stdout);
	return 0;
}
