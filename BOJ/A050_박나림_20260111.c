#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);

    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        char c = s[i];
        char out = c - 3;
        if (out < 'A') out = out + 26;
        printf("%c", out);
    }

    printf("\n");
    return 0;
}
