#include <stdio.h>
#include <string.h>
#include <conio.h>
typedef struct Flight {
    char flightNumber[10];
    char destination[50];
    int seatNumber;
    int isReserved;
    struct Flight *next;
} Flight;

int main() {
    Flight flights[3];

    strcpy(flights[0].flightNumber, "FL123");
    strcpy(flights[0].destination, "New York");
    flights[0].seatNumber = 10;
    flights[0].isReserved = 0;
    flights[0].next = &flights[1];

    strcpy(flights[1].flightNumber, "FL456");
    strcpy(flights[1].destination, "Los Angeles");
    flights[1].seatNumber = 20;
    flights[1].isReserved = 0;
    flights[1].next = &flights[2];

    strcpy(flights[2].flightNumber, "FL789");
    strcpy(flights[2].destination, "Chicago");
    flights[2].seatNumber = 30;
    flights[2].isReserved = 0;
    flights[2].next = NULL;

    Flight *current = &flights[0];
    while (current != NULL) {
        printf("Flight Number: %s\n", current->flightNumber);
        printf("Destination: %s\n", current->destination);
        printf("Seat Number: %d\n", current->seatNumber);
        printf("Status: %s\n", current->isReserved ? "Reserved" : "Available");
        printf("---------\n");
        current = current->next;
    }
getch();
    return 0;
}
