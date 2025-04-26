#include <stdio.h>

int power(int num, int exp){
	int res = 1;
	if(exp == 0)
		return 1;
	if(exp == 1)
		return num;
	for(int i = 1; i <= exp; ++i){
		res = res * num;
	}
	return res;
}
int main(){
	int num = 0, exp = 0;
	printf("enter number and exponent\n");
	scanf("%d %d", &num, &exp);
	printf("%d power of %d is %d\n", exp, num, power(num, exp));
	return 0;
}

