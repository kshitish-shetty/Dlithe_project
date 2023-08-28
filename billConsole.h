#include<stdio.h>
#include "struct.h"
#include "interface.h"

// Function to search and print a bill of a particular ID using binary search
void display_billByid(Info bill[], int max, const char* required_Id){
    printf("Enter Customer ID to search: ");
    scanf("%s", required_Id);    //getting ID from the user whose details are to be displayed

    int low = 0;
    int high = max - 1;
    int found = 0;  // Initialize a flag to track whether the ID was found.

    while (low <= high) {
        int mid = (low + high) / 2; // Finding middle index

        int compareResult = strcmp(bill[mid].ID, required_Id); //Comparing the ID of required bill with input ID and storing it in compare result

        if (compareResult == 0) {
            {
                header("Electricity Bill");
                printf("\n\n\n\t\tCustomer Name          : %s",bill[mid].name); // Accessing the struct name member
                printf("\n\t\tCustomer ID            : %s", bill[mid].ID ); // Accesing the struct ID member 
                printf("\n\t\tMonth                  : %d",bill[mid].month); //Accessing the struct Month member

                printf("\n\t\tPrevious Meter Reading : %d"pmr); // Accessing the struct PMR member
                printf("\n\t\tCurrent Meter Reading  : %d"cmr); // Accessing the struct CMR member
                printf("\n\t\tTotal Units. Used      : %d",bill[mid].units); // Accessing the struct Total Units. member
                printf("\n\t\tEnergy Charges.        : %d unit",charge); // Accessing the struct Energy Charges. member

                printf("\n\t\tYour Electricity BILL  : Rs. %.2lf \n\n\n",TOTAL); // The struct Total Amount calculated should be added

    
                printf("\t\tNOTE:DUE IS 30 DAYS FROM TODAY\n\t\t\tBILL MUST BE PAID WITHIN THE DUE.\n\t\t\tELSE YOU MAY BE CHARGED EXTRA.\n\n\n\n\t");
                footer();
            
            } 
            found = 1; // Indicating ID was found
            break;
        } else if (compareResult < 0) { // If required ID is less than the ID of middle element, search in the left half
            low = mid + 1; // Updating low value
        } else { //Search in the right half
            high = mid - 1; // updating high value
        }
    }
    //If ID of required bill is not found 
    if (!found) {
        printf("\n\n\t\t\t\t\t***ERROR***\n\t\t\t\t  Customer ID '%s' not found.\n", required_Id);
    }
}
