#include <stdio.h>
#define MAX 5 
#include <conio.h>

struct Stack {
    int arr[MAX];
    int top;
};

void initialize(struct Stack *stack);
int isFull(struct Stack *stack);
int isEmpty(struct Stack *stack);
void push(struct Stack *stack, int value);
int pop(struct Stack *stack);
int peek(struct Stack *stack);

int main() {
    struct Stack stack;
    initialize(&stack);

    // Push elements onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    // Pop an element from the stack
    printf("Popped: %d\n", pop(&stack));

    // Peek at the top element
    printf("Top element: %d\n", peek(&stack));
getch();
    return 0;
}

// Function to initialize the stack
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is full
int isFull(struct Stack *stack) {
    return stack->top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack is full!\n");
    } else {
        stack->arr[++stack->top] = value;
    }
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return stack->arr[stack->top--];
    }
}

// Function to peek the top element of the stack
int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return stack->arr[stack->top];
    }
}
