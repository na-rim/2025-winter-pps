#include <stdio.h>

int main() {
    int arr[8];

    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    int ascending = 1;
    int descending = 1;

    for (int i = 0; i < 7; i++) {
        if (arr[i] + 1 != arr[i + 1]) {
            ascending = 0;
        }
        if (arr[i] - 1 != arr[i + 1]) {
            descending = 0;
        }
    }

    if (ascending) {
        printf("ascending\n");
    } else if (descending) {
        printf("descending\n");
    } else {
        printf("mixed\n");
    }

    return 0;
}