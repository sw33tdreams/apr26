#include <stdio.h>

void axyusak(void){
	for(int i = 1; i <= 10; ++i){
		for(int  l = 1; l <= 10; ++l){
		printf("%d * %d = %d\n", i, l, i * l);
		}
		printf("\n");
	}
}
int main() {
	axyusak();
	return 0;
}

