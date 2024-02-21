#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    while (1)
    {
        int n, m;

        scanf("%d %d", &n, &m);

        if (n == 0 && m == 0)
            break;

        int* arr1 = malloc(sizeof(int) * n);
        int* arr2 = malloc(sizeof(int) * m);

        for (int i = 0; i < n; i++)
            scanf("%d", &arr1[i]);

        for (int i = 0; i < m; i++)
            scanf("%d", &arr2[i]);

        int ptr1 = 0, ptr2 = 0, cnt = 0;

        while (ptr1 < n && ptr2 < m)
        {
            if (arr1[ptr1] < arr2[ptr2])
                ptr1++;
            else if (arr1[ptr1] > arr2[ptr2])
                ptr2++;
            else
            {
                cnt++;
                ptr1++;
                ptr2++;
            }
        }

        printf("%d\n", cnt);

        free(arr1);
        free(arr2);
    }
    return 0;
}
