#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int A[50], B[50];

    for (int i = 0; i < N; i++) scanf("%d", &A[i]);
    for (int i = 0; i < N; i++) scanf("%d", &B[i]);

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                int tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (B[j] < B[j + 1]) {
                int tmp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = tmp;
            }
        }
    }

    int S = 0;
    for (int i = 0; i < N; i++) {
        S += A[i] * B[i];
    }

    printf("%d\n", S);
    return 0;
}
