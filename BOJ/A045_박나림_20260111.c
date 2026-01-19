#include <stdio.h>
#include <string.h>

int main() {
    char word[1000001];
    int count[26] = {0};

    scanf("%s", word);

    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        char c = word[i];
        if (c >= 'a' && c <= 'z') {
            count[c - 'a']++;
        } else if (c >= 'A' && c <= 'Z') {
            count[c - 'A']++;
        }
    }

    int max = 0;
    char result = '?';
    int same = 0;

    for (int i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = count[i];
            result = 'A' + i;
            same = 0;
        } else if (count[i] == max && max != 0) {
            same = 1;
        }
    }

    if (same)
        printf("?\n");
    else
