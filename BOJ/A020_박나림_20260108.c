#include <stdio.h>

int main(void) {
    int current = 0;   
    int maxPeople = 0; 
    for (int i = 0; i < 4; i++) {
        int out, in;
        scanf("%d %d", &out, &in);

        current -= out; 
        current += in;  

        if (current > maxPeople) {
            maxPeople = current;
        }
    }

    printf("%d\n", maxPeople);
    return 0;
}
