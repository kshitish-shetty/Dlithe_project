#include<stdio.h>
#include<stdlib.h>
#define rate 0.59

struct fileInput(fp)
typedef struct
{
    char name[30];
    char ID[10];
    int  units;
    double amount;
} Info;

int main(int argc,char **argv)
{
    int choice;
    printf ("\n************************************************\n");
    printf ("****************ELECTRICITY BILL****************\n");
    printf ("*******************GENERATOR********************\n");
    printf ("************************************************\n");
    do{
        printf ("\n_____MENU____\n\n");
        printf ("PRESS 1 to INPUT DATA.\n");
        printf ("PRESS 2 to GENERATE BILL.\n");
        printf ("PRESS 3 to EXIT.\n");
        scanf ("%d", &choice);
        switch(choice)
        {

            case 3: exit(0);

            default: printf("INVALID INPUT. please try again.");
        }
    }while(1);
    
    return 0;
}
