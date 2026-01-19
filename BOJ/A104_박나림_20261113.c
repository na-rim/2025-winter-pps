#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long sum = 0;
    int mx = 0;

    for (int i = 0; i < n; i++) {
        int v;
        scanf("%d", &v);
        sum += v;
        if (v > mx) mx = v;
    }

    if (n == 1) {
        printf("0\n");
    } else {
        printf("%lld\n", sum - mx);
    }

    return 0;
}
