#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count[26] = {0};

    for (int i = 0; i < N; i++) {
        char name[31];
        scanf("%s", name);
        count[name[0] - 'a']++;
    }

    int found = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] >= 5) {
            printf("%c", 'a' + i);
            found = 1;
        }
    }

    if (!found) {
        printf("PREDAJA");
    }

    printf("\n");
    return 0;
}
