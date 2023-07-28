#include<stdio.h>
#include<stdlib.h>

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
    printf ("************************************************\n");
    printf ("****************ELECTRICITY BILL****************\n");
    printf ("*******************GENERATOR********************\n");
    printf ("************************************************\n");
    while (1)
    {
        printf ("\n_____MENU____\n\n");
        printf ("PRESS 1 to INPUT DATA.\n");
        printf ("PRESS 2 to GENERATE BILL.\n");
        printf ("PRESS ANYKEY to EXIT.\n");
        scanf ("%d", &choice);
        switch(choice)
        {
            default: exit(0);
        }
    }
    
    return 0;
}