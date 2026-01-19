#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

        int temp = N;
        int rev = 0;

        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }

        int sum = N + rev;

        int check = sum;
        int pal = 0;

        while (check > 0) {
            pal = pal * 10 + (check % 10);
            check /= 10;
        }

        if (sum == pal)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
