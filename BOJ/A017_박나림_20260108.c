#include <stdio.h>

int main(void) {
    int N;
    int count[10] = {0};

    scanf("%d", &N);

    while (N > 0) {
        int digit = N % 10;
        count[digit]++;
        N /= 10;
    }

    int six_nine = count[6] + count[9];
    int need = (six_nine + 1) / 2;

    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9) continue;
        if (count[i] > need)
            need = count[i];
    }

    printf("%d\n", need);
    return 0;
}
