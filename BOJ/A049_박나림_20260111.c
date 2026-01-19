#include <stdio.h>
#include <string.h>

int main() {
    char s[30];

    while (1) {
        scanf("%s", s);
        if (strcmp(s, "end") == 0) break;

        int hasVowel = 0;
        int ok = 1;

        int vowelStreak = 0;
        int consStreak = 0;

        int len = strlen(s);

        for (int i = 0; i < len; i++) {
            char c = s[i];

            int isVowel = 0;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                isVowel = 1;
            }

            if (isVowel) {
                hasVowel = 1;
                vowelStreak++;
                consStreak = 0;
            } else {
                consStreak++;
                vowelStreak = 0;
            }

            if (vowelStreak >= 3 || consStreak >= 3) {
                ok = 0;
                break;
            }

            if (i > 0 && s[i] == s[i - 1]) {
                if (!(s[i] == 'e' || s[i] == 'o')) {
                    ok = 0;
                    break;
                }
            }
        }

        if (hasVowel == 0) ok = 0;

        if (ok == 1)
            printf("<%s> is acceptable.\n", s);
        else
            printf("<%s> is not acceptable.\n", s);
    }

    return 0;
}
