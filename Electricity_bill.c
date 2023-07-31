#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "fileManage.h"
// #include "infoStruct.h"
int main(int argc,char **argv)
{
    Info* thisUser = (Info*)malloc(sizeof(Info));
    strcpy(thisUser -> name,"Shrimaan");
    thisUser -> units = 89;
    thisUser -> amount = 8009;
    strcpy(thisUser -> ID,"12345");

    int choice;
    printf ("\n************************************************\n");
    printf ("****************ELECTRICITY BILL****************\n");
    printf ("*******************GENERATOR********************\n");
    printf ("************************************************\n");
    do {
        printf ("\n_____MENU____\n\n");
        printf ("PRESS 1 to INPUT DATA.\n");
        printf ("PRESS 2 to GENERATE BILL.\n");
        printf("PRESS 3 to print to file.\n");
        printf ("PRESS ANYKEY to EXIT.\n");
        scanf ("%d", &choice);

    char nameUser1[5]="jai";
    switch(choice)
        {
            case 3: printf("\n Printing Bill To File. \n");
                printBilltoFile(thisUser);
                break;
            default: exit(0);
        }
    }
    while (choice != 0);
    
    
    return 0;
}