#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include"struct.h"

// Function to read data from the file and store it in a linked list
void readFileData(Info** head, char* filename) {
    
    FILE* file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Error opening file %s.\n", filename);
        perror("Error");
        return;
    }

    char name[30]="";
    char ID[10]="";
    int month=0;
    int unit=0;
    
    
    
    append(head, name, ID, month, unit, 0);

    fclose(file);
}


// Function to print the linked list
void printLinkedList(Info* head) {
    Info* current = head;
    while (current != NULL) {
        printf("Name: %s, ID: %s, Month: %d, Units: %d\n", current->name, current->ID, current->month, current->units);
        current = current->next;
    }
}

int main() {
    Info* head = NULL;

    // Provide the user-specified file name
    char* filename;

    scanf("%s",filename);

    readFileData(&head,filename);

    printLinkedList(head);
    // After printing, reset the file pointer to the beginning of the file


    // Freeing the memory used by the linked list
    freeList(head);

    return 0;
}
