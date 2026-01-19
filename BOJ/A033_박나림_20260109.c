#include <stdio.h>

int main(void) {
    int winner = 0;
    int maxSum = -1;

    for (int i = 1; i <= 5; i++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int sum = a + b + c + d;

        if (sum > maxSum) {
            maxSum = sum;
            winner = i;
        }
    }

    printf("%d %d\n", winner, maxSum);
    return 0;
}
