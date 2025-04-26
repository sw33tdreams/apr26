#include <stdio.h>
#include <string.h>
int main() {
	char arr[25] = {};
	fgets(arr, 25, stdin);
      for(int i = 0; i <= 24; ++i){
      	if(arr[i] <= 57 && arr[i] >= 48){
  		printf("%c\n", arr[i]);
	}
      }
return 0;
}
