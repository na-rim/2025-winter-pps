#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int y = 0; 
    int m = 0; 

    for (int i = 0; i < N; i++) {
        int t;
        scanf("%d", &t);

        y += (t / 30 + 1) * 10;
        m += (t / 60 + 1) * 15;
    }

    if (y < m) {
        printf("Y %d\n", y);
    } else if (m < y) {
        printf("M %d\n", m);
    } else {
        printf("Y M %d\n", y);
    }

    return 0;
}
