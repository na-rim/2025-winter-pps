#include <stdio.h>
#include <string.h>

int main() {
    char s[16];
    scanf("%s", s);

    int len = strlen(s);
    int sum = 0;

    for (int i = 0; i < len; i++) {
        char c = s[i];

        if (c >= 'A' && c <= 'C') sum += 3;
        else if (c >= 'D' && c <= 'F') sum += 4;
        else if (c >= 'G' && c <= 'I') sum += 5;
        else if (c >= 'J' && c <= 'L') sum += 6;
        else if (c >= 'M' && c <= 'O') sum += 7;
        else if (c >= 'P' && c <= 'S') sum += 8;
        else if (c >= 'T' && c <= 'V') sum += 9;
        else if (c >= 'W' && c <= 'Z') sum += 10;
    }

    printf("%d\n", sum);
    return 0;
}
