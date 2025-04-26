#include <stdio.h>

int fact(int n){
	int res = 1;
	if(n == 0)
		return 1;
	for(int i = 1; i <= n; ++i){
	res = res * i;
	}
	return res;
}
int main() {
	int num = 0;
	printf("enter num\n");
	scanf("%d", &num);
	printf("fact of %d is %d\n", num, fact(num));
return 0;
}


