#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int calculate(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (i < 100 || (i < 1000 && (i / 100 - (i % 100) / 10 == (i % 100) / 10 - (i % 10)))) {
            count++;
        }
    }

    return count;
}
int main(void) {
    int n;
    scanf("%d", &n);

    printf("%d", calculate(n));

    return 0;
}