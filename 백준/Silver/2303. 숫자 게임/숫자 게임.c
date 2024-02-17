#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

    int a[10];
    int n, max = 0;
    int com;
    int res = 0;

    int i, j;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {

        for (j = 1; j <= 5; j++) {
            scanf("%d", &a[j]);
        }

        com = 0;

        if ((a[1] + a[2] + a[3]) % 10 >= com) {
            com = (a[1] + a[2] + a[3]) % 10;
        }
        if ((a[1] + a[2] + a[4]) % 10 >= com) {
            com = (a[1] + a[2] + a[4]) % 10;
        }
        if ((a[1] + a[2] + a[5]) % 10 >= com) {
            com = (a[1] + a[2] + a[5]) % 10;
        }
        if ((a[1] + a[3] + a[4]) % 10 >= com) {
            com = (a[1] + a[3] + a[4]) % 10;
        }
        if ((a[1] + a[3] + a[5]) % 10 >= com) {
            com = (a[1] + a[3] + a[5]) % 10;
        }
        if ((a[1] + a[4] + a[5]) % 10 >= com) {
            com = (a[1] + a[4] + a[5]) % 10;
        }
        if ((a[2] + a[3] + a[4]) % 10 >= com) {
            com = (a[2] + a[3] + a[4]) % 10;
        }
        if ((a[2] + a[3] + a[5]) % 10 >= com) {
            com = (a[2] + a[3] + a[5]) % 10;
        }
        if ((a[2] + a[4] + a[5]) % 10 >= com) {
            com = (a[2] + a[4] + a[5]) % 10;
        }
        if ((a[3] + a[4] + a[5]) % 10 >= com) {
            com = (a[3] + a[4] + a[5]) % 10;
        }

        if (com >= max) {
            max = com;
            res = i;
        }
    }

    printf("%d", res);

	return 0;
}