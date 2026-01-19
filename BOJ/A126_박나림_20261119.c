#include <stdio.h>

int main() {
    int N;
    int count;
    int i;
    int a, b, c;

    scanf("%d", &N);

    if (N < 100) {
        printf("%d\n", N);
        return 0;
    }

    count = 99;

    for (i = 100; i <= N; i++) {
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;

        if ((a - b) == (b - c)) {
            count++;
        }
    }

    if (N == 1000) {
        printf("%d\n", 99 + (N >= 100 && 999 >= 100 ? 0 : 0));
    } else {
        printf("%d\n", count);
    }

    return 0;
}
