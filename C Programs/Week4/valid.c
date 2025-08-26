#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char news[100]; // stack
    int i = 0, top = -1;

    printf("Enter a parenthesis format: ");
    fgets(str, sizeof(str), stdin);

    printf("The String is %s", str);
    int l = strlen(str);

    for (i = 0; i < l; i++) {
        // If opening bracket, push to stack
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            news[++top] = str[i];
        }
        // If closing bracket, check stack top
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
            if (top == -1) { // no opening to match
                printf("Invalid Parenthesis!\n");
                return 0;
            }
            if ((str[i] == ')' && news[top] == '(') ||
                (str[i] == '}' && news[top] == '{') ||
                (str[i] == ']' && news[top] == '[')) {
                top--; // matched ? pop
            } else {
                printf("Invalid Parenthesis!\n");
                return 0;
            }
        }
    }

    if (top == -1) {
        printf("Valid Parenthesis!\n");
    } else {
        printf("Invalid Parenthesis!\n");
    }
    return 0;
}

