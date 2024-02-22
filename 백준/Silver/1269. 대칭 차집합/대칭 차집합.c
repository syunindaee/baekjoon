#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *((int*)a) - *((int*)b);
}

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);
    int sum = N + M;

    int* A = malloc(sizeof(int) * sum);
    for (int i = 0; i < sum; i++) {
        scanf("%d", &A[i]);
    }
    qsort(A, sum, sizeof(int), compare);

    int count = 0;
    int duplicates = 0;

    for (int i = 1; i < sum; i++) {
        if (A[i] == A[i - 1]) {
            duplicates++;
        } else {
            count += duplicates > 0 ? 2 : 0;
            duplicates = 0;
        }
    }

    count += duplicates > 0 ? 2 : 0; // Check for duplicates after the loop

    printf("%d\n", sum - count);

    free(A);

    return 0;
}
