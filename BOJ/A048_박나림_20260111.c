#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int answer = 0;

    for (int i = 0; i < N; i++) {
        char word[101];
        scanf("%s", word);

        int seen[26] = {0};
        int ok = 1;

        int len = strlen(word);
        for (int j = 0; j < len; j++) {
            int cur = word[j] - 'a';

            if (j > 0 && word[j] == word[j - 1]) {
                continue;
            }

            if (seen[cur] == 1) {
                ok = 0;
                break;
            }

            seen[cur] = 1;
        }

        if (ok == 1) {
            answer++;
        }
    }

    printf("%d\n", answer);
    return 0;
}
