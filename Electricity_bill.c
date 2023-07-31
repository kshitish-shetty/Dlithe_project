#include<stdio.h>
#include<stdlib.h>
#define rate 0.59

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
        printf ("PRESS ANYKEY to EXIT.\n");
        scanf ("%d", &choice);
        switch(choice)
        {
            default: exit(0);
        }
    }while(1);
    
    return 0;
}
