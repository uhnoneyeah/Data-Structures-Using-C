#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to push an element onto the stack
void push(struct Node** top_ref, int value) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Stack overflow!\n");
        return;
    }
    new_node->data = value;
    new_node->next = *top_ref;
    *top_ref = new_node;
}

// Function to pop an element from the stack
int pop(struct Node** top_ref) {
    if (*top_ref == NULL) {
        printf("Stack underflow!\n");
        return -1;
    }
    struct Node* temp = *top_ref;
    int popped_value = temp->data;
    *top_ref = temp->next;
    free(temp);
    return popped_value;
}

// Function to peek the top element of the stack
int peek(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty!\n");
        return -1;
    }
    return top->data;
}
int main() {
    struct Node* stack = NULL;

    // Push elements onto the stack
    push(&stack, 10); 
    push(&stack, 20); 
    push(&stack, 30); 

    // Pop an element from the stack
    printf("Popped: %d\n", pop(&stack));

    // Peek at the top element
    printf("Top element: %d\n", peek(stack)); 
getch();
    return 0;
}
