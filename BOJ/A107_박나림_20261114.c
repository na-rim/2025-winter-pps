#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int idx = 0;
    int sum = 0;

    for (int i = 1; idx < B; i++) {
        for (int j = 0; j < i; j++) {
            idx++;
            if (idx >= A && idx <= B) {
                sum += i;
            }
            if (idx > B) break;
        }
    }

    printf("%d\n", sum);
    return 0;
}
