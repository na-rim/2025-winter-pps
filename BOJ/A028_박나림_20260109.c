#include <stdio.h>
#include <string.h>

int main() {
    char A[1000001];
    char B[1000001];
    char result[1000002];

    scanf("%s %s", A, B);

    int lenA = strlen(A);
    int lenB = strlen(B);

    int i = lenA - 1;
    int j = lenB - 1;
    int k = 0;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;

        if (i >= 0) {
            sum += A[i] - '0';
            i--;
        }

        if (j >= 0) {
            sum += B[j] - '0';
            j--;
        }

        result[k] = (sum % 10) + '0';
        carry = sum / 10;
        k++;
    }

    // 결과 거꾸로 출력해야함
    for (int x = k - 1; x >= 0; x--) {
        printf("%c", result[x]);
    }

    printf("\n");
    return 0;
}
