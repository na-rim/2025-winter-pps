#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        char s[81];
        scanf("%s", s);

        int score = 0;
        int streak = 0;

        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            if (s[i] == 'O') {
                streak++;
                score += streak;
            } else {
                streak = 0;
            }
        }

        printf("%d\n", score);
    }

    return 0;
}
