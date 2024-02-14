#include <stdio.h>
#include <stdlib.h>

struct info {
    int born;
    int num;
    int score;
};

typedef struct info Info;

int check[100];

void setInfo(Info *stu, int born, int num, int score) {
    stu->born = born;
    stu->num = num;
    stu->score = score;
}

void showInfo(Info *stu) {
    printf("%d %d\n", stu->born, stu->num);
}

int compare(const void *a, const void *b) {
    return ((Info *)b)->score - ((Info *)a)->score;
}

int main() {
    Info stu[100];
    int born, num, score;
    int n;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &born, &num, &score);
        setInfo(&stu[i], born, num, score);
    }

    qsort(stu, n, sizeof(Info), compare);

    for (int i = 0, cnt = 0; i < n && cnt < 3; i++) {
        if (check[stu[i].born] < 2) {
            check[stu[i].born]++;
            showInfo(&stu[i]);
            cnt++;
        }
    }

    return 0;
}
