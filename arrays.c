#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Patient {
    char name[50];
    int age;
    char gender[10];
    char diagnosis[100];
};

int main() {
    struct Patient patients[100];
    int count, i, j;
    char deleteName[50];

    printf("Enter the number of patients: ");
    scanf("%d", &count);

    for (i = 0; i < count; i++) {
        printf("Enter information for patient %d\n", i + 1);

        printf("Name: ");
        scanf("%s", patients[i].name);

        printf("Age: ");
        scanf("%d", &patients[i].age);

        printf("Gender: ");
        scanf("%s", patients[i].gender);

        printf("Diagnosis: ");
        scanf(" %[^\n]%*c", patients[i].diagnosis); 

        printf("\n");
    }

    printf("Patient Information:\n");
    for (i = 0; i < count; i++) {
        printf("Patient %d\n", i + 1);
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("Gender: %s\n", patients[i].gender);
        printf("Diagnosis: %s\n", patients[i].diagnosis);
        printf("\n");
    }

    printf("Enter the name of the patient to delete: ");
    scanf("%s", deleteName);

    for (i = 0; i < count; i++) {
        if (strcmp(patients[i].name, deleteName) == 0) {
            for (j = i; j < count - 1; j++) {
                patients[j] = patients[j + 1];
            }
            count--;
            printf("Patient %s deleted.\n", deleteName);
            break;
        }
    }

    printf("Updated Patient Information:\n");
    for (i = 0; i < count; i++) {
        printf("Patient %d\n", i + 1);
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("Gender: %s\n", patients[i].gender);
        printf("Diagnosis: %s\n", patients[i].diagnosis);
        printf("\n");
    }
getch();
    return 0;
}
