#include <stdio.h>

long long gcd_ll(long long a, long long b) {
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int M;
    scanf("%d", &M);

    long long num = 1;
    long long den = 1;
    int dir = 0;

    for (int i = 0; i < M; i++) {
        long long a, b;
        int s;
        scanf("%lld %lld %d", &a, &b, &s);

        if (s == 1) dir = 1 - dir;

        long long g1 = gcd_ll(num, a);
        num /= g1;
        a /= g1;

        long long g2 = gcd_ll(b, den);
        b /= g2;
        den /= g2;

        num *= b;
        den *= a;
    }

    printf("%d %lld\n", dir, num / den);
    return 0;
}
