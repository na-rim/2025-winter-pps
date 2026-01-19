#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int minPack = 1000000000;
    int minSingle = 1000000000;

    for (int i = 0; i < M; i++) {
        int pack, single;
        scanf("%d %d", &pack, &single);

        if (pack < minPack) minPack = pack;
        if (single < minSingle) minSingle = single;
    }

    int cost1 = ((N + 5) / 6) * minPack;
    int cost2 = (N / 6) * minPack + (N % 6) * minSingle;
    int cost3 = N * minSingle;

    int ans = cost1;
    if (cost2 < ans) ans = cost2;
    if (cost3 < ans) ans = cost3;

    printf("%d\n", ans);
    return 0;
}
