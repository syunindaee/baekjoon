#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;
    int alpha[26] = { 0 };
    char str[101];
    int count = 0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%s", str);

        for (int j = 0; j < 26; j++) {
            alpha[j] = 0;
        }

        int a = 0;
        int isDouble = 1;

        while (str[a]) {
            if (alpha[str[a] - 'a']) {
                isDouble = 0;
                break;
            }

            if (str[a] != str[a - 1]) {
                alpha[str[a - 1] - 'a']++;
            }
            a++;
        }

        count += isDouble;
    }

    printf("%d\n", count);

    return 0;
}
