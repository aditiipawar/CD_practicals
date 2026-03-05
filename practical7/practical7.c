#include <stdio.h>
#include <string.h>

char stack[20];
char input[20];
int top = -1;
int i = 0;

void push(char c) {
    stack[++top] = c;
}

void pop() {
    top--;
}

void display() {
    int j;
    for(j = 0; j <= top; j++)
        printf("%c", stack[j]);
}

int main() {
    printf("Enter the input string: ");
    scanf("%s", input);

    push('$');

    while(input[i] != '\0') {
        push(input[i]);
        i++;

        printf("\nStack: ");
        display();
        printf("  Input: %s", &input[i]);

        if(stack[top] == 'a') {
            printf("  Reduce by A -> a");
        }
    }

    if(stack[top] == '$') {
        printf("\nString Accepted\n");
    } else {
        printf("\nString Rejected\n");
    }

    return 0;
}