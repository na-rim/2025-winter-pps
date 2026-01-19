#include <stdio.h>
#include <string.h>

int main() {
    char word[101];
    scanf("%s", word);

    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        printf("%c", word[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    if (len % 10 != 0) {
        printf("\n");
    }

    return 0;
}
