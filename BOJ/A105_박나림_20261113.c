#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int line = 1;
    int sum = 0;

    while (1) {
        if (sum + line >= X) break;
        sum += line;
        line++;
    }

    int pos = X - sum;

    int a, b;

    if (line % 2 == 1) {
        a = line - pos + 1;
        b = pos;
    } else {
        a = pos;
        b = line - pos + 1;
    }

    printf("%d/%d\n", a, b);
    return 0;
}
