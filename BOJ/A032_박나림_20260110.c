#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);   

    for (int tc = 0; tc < T; tc++) {

        int k, n;
        scanf("%d", &k);  
        scanf("%d", &n);

        int a[15][15];

        for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 15; j++) {
                a[i][j] = 0;
            }
        }

        for (int i = 1; i <= 14; i++) {
            a[0][i] = i;
        }
        
        for (int floor = 1; floor <= k; floor++) {
            for (int room = 1; room <= n; room++) {
                a[floor][room] =
                    a[floor][room - 1] + a[floor - 1][room];
            }
        }

        printf("%d\n", a[k][n]);
    }

    return 0;
}
