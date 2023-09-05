#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include"struct.h"

// Function to read a string character by character while optionally not displaying said characters.
void getString(char* arr,int hide){
	 char ch;
	 int i=0;
	 while ((ch = getch()) != 13) {
 	    if (ch == 8) { // Backspace ASCII value
 	        if (i > 0) {
 	            // Move cursor back, overwrite the character with a space, and move cursor back again
 	            printf("\b \b");
 	            i--;
 	        }
 	    } else if (i < 20) {
 	        arr[i++] = ch;
			if(hide)
 	        	printf("*");
			else	
				printf("%c",ch);
 	    }
 	}
 	arr[i] = '\0';
}

// Function to read data from the file and store it in a linked list
void readFileData(Info** head, char* filename) {
    
    int BUFSIZE = 1024;
    char buffer[BUFSIZE];
    char enter;

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
    int fieldCount=0;

    while ((fscanf(file,"%[^,\n]%c",buffer,&enter)) != EOF) { 
            switch(fieldCount){
                case 0:
                    strcpy(name,buffer);
                    break;
                case 1:
                    strcpy(ID,buffer);
                    break;
                case 2:
                    month= atoi(buffer);
                    break;
                case 3:
                    unit= atoi(buffer);
                    break;
                default:
                    printf("FILE READING ERROR.");
                    return;
            }   
        
        if(fieldCount==3){
            append(head, name, ID, month, unit, 0);
            char name[30]="";
            char ID[10]="";
            int month=0;
            int unit=0;
        }   

        fieldCount++;
        fieldCount=fieldCount%4;

    }  
    
    fclose(file);
}


// // Function to print the linked list
// void printLinkedList(Info* head) {
    // Info* current = head;
    // while (current != NULL) {
        // printf("Name: %s, ID: %s, Month: %d, Units: %d\n", current->name, current->ID, current->month, current->units);
        // current = current->next;
    // }
// }

// int main() {
    // Info* head = NULL;
// 
    // Provide the user-specified file name
    // char* filename;
// 
    // scanf("%s",filename); // the input seems not to be working.!!
    // fflush(stdin);
    // data flush is req i guess let me see
    // filename = "data.txt";
    // readFileData(&head,filename);
// 
    // printLinkedList(head);
    // After printing, reset the file pointer to the beginning of the file
// 
// 
    // Freeing the memory used by the linked list
    // freeList(head);
// 
    // return 0;
// }
