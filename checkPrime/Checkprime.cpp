#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int input, a, flag = 0;
int checkPrime(int input);
int main() {

	scanf("%d", &input);
	checkPrime(input);
	if (flag == 0)	printf("Prime");
	else if (flag == 1)	printf("Not Prime");
	return 0;
}

int checkPrime(int N) {

	for (a = 2;a < (N / 2);a++) {
		if (N % a == 0)
			flag = 1;
		break;
	}
	return flag;
}