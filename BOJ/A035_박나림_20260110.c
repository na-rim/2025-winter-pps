#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    getchar();  // 첫 줄 개행 제거

    for (int tc = 0; tc < T; tc++) {
        char line[100];
        fgets(line, sizeof(line), stdin);

        double x;
        sscanf(line, "%lf", &x);

        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == '@') x = x * 3.0;
            else if (line[i] == '%') x = x + 5.0;
            else if (line[i] == '#') x = x - 7.0;
        }

        printf("%.2f\n", x);
    }

    return 0;
}
