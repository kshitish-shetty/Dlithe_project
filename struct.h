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
void append(Info* head, char *name, char *ID, int month, int  units, double amount) {
    Info* newNode = createNode(name, ID, month, units, amount);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Info* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}

#endif
