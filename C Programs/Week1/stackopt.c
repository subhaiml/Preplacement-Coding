#include <stdio.h>
#define SIZE 100
int stack[SIZE], top = -1;
void push() {
    int val;
    if (top == SIZE - 1)
        printf("Stack Overflow\n");
    else {
        printf("Enter value to push: ");
        scanf("%d", &val);
        stack[++top] = val;
    }
}
void pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("Popped: %d\n", stack[top--]);
}
void peek() {
    if (top == -1)
        printf("Stack is empty\n");
    else
        printf("Top element: %d\n", stack[top]);
}
void display() {
    if (top == -1)
        printf("Stack is empty\n");
    else {
        printf("Stack: ");
        for (int i = 0; i <= top; i++)
            printf("%d ", stack[i]);
        printf("\n");
    }
}
int main() {
    int choice;
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
