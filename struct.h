#ifndef STRUCT_H
#define STRUCT_H

#include<stdlib.h>
#include<string.h>

typedef struct Info {
    char name[30];
    char ID[10];
    int month;
    int  units;
    double amount;
    float pmr;
    float cmr;
    struct Info *prev;
    struct Info *next;
}Info;


// Function to create new node
Info* createNode(char *name, char *ID, int month, int  units, double amount) {
    Info* newNode = (Info*)malloc(sizeof(Info));
    strcpy(newNode->name,name);
    strcpy(newNode->ID,ID);
    newNode->month = month;
    newNode->units = units;
    newNode->amount = amount;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert node at the end of linked list
void append(Info** head, char* name, char* ID, int month, int units, double amount) {
    Info* newNode = createNode(name, ID, month, units, amount);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Info* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}

// Function to find the length of linked list
int findLength(struct Info* head) {
    int length = 0;
    struct Info* current = head;

    // Traverse the list and count nodes
    while (current != NULL) {
        length++;
        current = current->next;
    }

    return length;
}

// Function to free memory after use 
void freeList(Info* head) {
    Info* current = head;
    while (current != NULL) {
        Info* temp = current;
        current = current->next;
        free(temp);
    }
}

#endif
