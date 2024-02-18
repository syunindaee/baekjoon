#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int req(int num) {
	int count = 0;
	
	for (int i = 5; num / i >= 1; i *= 5) {
		count += num / i;
	}

	return count;
}
int main(void) {

	int n, i;

	scanf("%d", &n);

	int sum = req(n);

	printf("%d\n", sum);

	return 0;
}