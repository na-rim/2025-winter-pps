#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int k;
        scanf("%d", &k);

        long long ans = (1LL << k) - 1;
        printf("%lld\n", ans);
    }

    return 0;
}
