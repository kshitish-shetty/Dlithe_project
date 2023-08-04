#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include"struct.h"

// Function to read data from the file and store it in a linked list
void readDataFromFile(Info** head, const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    char name[30];
    char ID[10];
    int month;
    int units;
    double amount=0;

    while (fscanf(file, "%s %s %d %d %lf", name, ID, &month, &units) == 4) {
        append(head, name, ID, month, units, amount);
    }

    fclose(file);
}

// Function to print the linked list in forward order
void printForward(Info** head) {
    Info* current = *head;
    while (current != NULL) {
        printf("Name: %s, ID: %s, Month: %d, Units: %d, Amount: %lf\n", current->name, current->ID, current->month, current->units, current->amount);
        current = current->next;
    }
}

int main() {
    Info* head = NULL;

    // Provide the user-specified file name
    const char* filename = "data.csv";

    // Read data from the file and store it in a linked list
    readDataFromFile(&head, filename);

    // Printing the linked list in forward order
    printf("Data from the file stored in the linked list:\n");
    printForward(&head);

    // Freeing the memory used by the linked list
    freeList(head);

    return 0;
}
