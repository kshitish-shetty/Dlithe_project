#include <stdio.h>
#include<stdlib.h>
#include "interface.h"
#include "struct.h"
  

typedef struct Node {
    Info data;
    struct Node* next;
} Node;

// Function to create a new node with given data
Node* createNode(Info newData) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the linked list
void insertNode(Node** head, Info newData) {
    Node* newNode = createNode(newData);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to generate a bill for a given customer node
void generateBill(Node* node) {
    header("INPUT");
    printf("\n\n\n\t\tCustomer Name  : %s\n\n\n", node->data.name);
    printf("\n\n\n\t\tCustomer ID    : %s\n\n\n", node->data.ID);
    printf("\n\n\n\t\tUnits Consumed : %d\n\n\n", node->data.units);
    footer();
}
    
   
// Function to free memory used by the linked list
void freeList(Node* head) {
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }
}


        





