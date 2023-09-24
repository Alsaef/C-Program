#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1;

// Function to push a value onto the stack
void push(int value) {
    if (top == MAX_STACK_SIZE - 1) {
        printf("Stack is full. Cannot push.\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

// Function to pop a value from the stack
int pop() {
    if (top == -1) {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Return a sentinel value to indicate failure
    } else {
        int value = stack[top];
        top--;
        printf("%d popped from the stack.\n", value);
        return value;
    }
}

// Function to display the contents of the stack
void displayStack() {
    printf("Stack contents: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, num;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push onto Stack\n");
        printf("2. Pop from Stack\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a value to push onto the stack: ");
                scanf("%d", &num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                displayStack();
                break;
            case 4:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
