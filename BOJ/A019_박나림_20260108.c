#include <stdio.h>

int main(void) {
    int A, B, C;
    int result;
    int count[10] = {0};  

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    result = A * B * C;

    while (result > 0) {
        int digit = result % 10;
        count[digit]++;
        result /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}
