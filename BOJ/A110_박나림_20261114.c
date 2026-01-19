#include <stdio.h>

int main() {
    int price;
    scanf("%d", &price);

    int change = 1000 - price;
    int count = 0;

    int coins[6] = {500, 100, 50, 10, 5, 1};

    for (int i = 0; i < 6; i++) {
        count += change / coins[i];
        change = change % coins[i];
    }

    printf("%d\n", count);
    return 0;
}
