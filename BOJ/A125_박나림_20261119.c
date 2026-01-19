#include <stdio.h>

int main() {
    int N;
    int rope[100000];
    int i, j;
    int temp;
    int ans;
    int w;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &rope[i]);
    }

    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (rope[i] > rope[j]) {
                temp = rope[i];
                rope[i] = rope[j];
                rope[j] = temp;
            }
        }
    }

    ans = 0;
    for (i = 0; i < N; i++) {
        w = rope[i] * (N - i);
        if (w > ans) {
            ans = w;
        }
    }

    printf("%d\n", ans);
    return 0;
}
