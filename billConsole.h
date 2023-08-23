#include<stdio.h>
#include "struct.h"
#include "interface.h"

// Function to print all the data to the console
void display_bill(){
    header("ELECTRICTY-BILL");
    printf("\n\n\n\t\tCustomer Name          : %s",user_name); // Accessing the struct name member
    printf("\n\t\tCustomer ID            : %d",user->user_ID); // Accesing the struct ID member 
    printf("\n\t\tMonth                  : %s","JAN-MAN"); //Accessing the struct Month member

    printf("\n\t\tPrevious Meter Reading : %d unit",pmr); // Accessing the struct PMR member
    printf("\n\t\tCurrent Meter Reading  : %d unit",cmr); // Accessing the struct CMR member
    printf("\n\t\tTotal Units. Used      : %d unit",units_used); // Accessing the struct Total Units. member
    printf("\n\t\tEnergy Charges.        : %d unit",charge); // Accessing the struct Energy Charges. member

    printf("\n\t\tYour Electricity BILL  : Rs. %lf \n\n\n",Total); // The struct Total Amount calculated should be added

    printf("\t\tNOTE: DUE IS 30 DAYS FROM TODAY\n\t\t\tBILL MUST BE PAID WITHIN THE DUE.\n\t\t\tELSE YOU MAY BE CHARGED EXTRA.\n\n\n\n\t");
    footer();
} 


