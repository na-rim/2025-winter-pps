#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 0; tc < T; tc++) {
        char s[1001];
        scanf("%s", s);

        int seen[26] = {0};

        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            seen[s[i] - 'A'] = 1;
        }

        int sum = 0;
        for (int i = 0; i < 26; i++) {
            if (seen[i] == 0) {
                sum += ('A' + i);
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
