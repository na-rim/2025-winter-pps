#include <stdio.h>

int main() {
    int num;
    int remain[42] = {0};
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);

        int r = num % 42;

        if (remain[r] == 0) {
            remain[r] = 1;
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
