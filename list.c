#include <stdio.h>
#include <conio.h>

#define MAX_SIZE 100


struct List {
    int items[MAX_SIZE];
    int size;           
};


void initList(struct List *list) {
    list->size = 0;
}

void addItem(struct List *list, int item) {
    if (list->size < MAX_SIZE) {
        list->items[list->size] = item;
        list->size++;
    } else {
        printf("List is full!\n");
    }
}
void displayList(struct List list) {
    int i;
    printf("List items: ");
    for (i = 0; i < list.size; i++) {
        printf("%d ", list.items[i]);
    }
    printf("\n");
}

void removeItem(struct List *list, int index) {
    int i;
    if (index >= 0 && index < list->size) {
        for (i = index; i < list->size - 1; i++) {
            list->items[i] = list->items[i + 1];
        }
        list->size--;
    } else {
        printf("Invalid index!\n");
    }
}

int main() {
    struct List myList; 

    initList(&myList);   

    addItem(&myList, 10);
    addItem(&myList, 20);
    addItem(&myList, 30);

    displayList(myList); 

    removeItem(&myList, 1);

    displayList(myList);
getch();
    return 0;
}
