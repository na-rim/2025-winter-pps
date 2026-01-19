#include <stdio.h>
#include <string.h>

typedef struct {
    int data[10000];
    int top;
} Stack;

void stack_init(Stack *s) {
    s->top = 0;
}

void stack_push(Stack *s, int x) {
    s->data[s->top] = x;
    s->top++;
}

int stack_pop(Stack *s) {
    if (s->top == 0) return -1;
    s->top--;
    return s->data[s->top];
}

int stack_size(Stack *s) {
    return s->top;
}

int stack_empty(Stack *s) {
    if (s->top == 0) return 1;
    return 0;
}

int stack_top(Stack *s) {
    if (s->top == 0) return -1;
    return s->data[s->top - 1];
}

int main() {
    int N;
    scanf("%d", &N);

    Stack s;
    stack_init(&s);

    for (int i = 0; i < N; i++) {
        char cmd[10];
        scanf("%s", cmd);

        if (strcmp(cmd, "push") == 0) {
            int x;
            scanf("%d", &x);
            stack_push(&s, x);
        } else if (strcmp(cmd, "pop") == 0) {
            printf("%d\n", stack_pop(&s));
        } else if (strcmp(cmd, "size") == 0) {
            printf("%d\n", stack_size(&s));
        } else if (strcmp(cmd, "empty") == 0) {
            printf("%d\n", stack_empty(&s));
        } else if (strcmp(cmd, "top") == 0) {
            printf("%d\n", stack_top(&s));
        }
    }

    return 0;
}
