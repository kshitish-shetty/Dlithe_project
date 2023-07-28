#include<stdio.h>

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
    printf ("********************************************\n");
    printf ("****************HANGMAN GAME****************\n");
    printf ("********************************************\n");
    while (1)
    {
        printf ("\n\t****MENU****\n");
        printf ("PRESS 1 to INPUT DATA.\n");
        printf ("PRESS 2 to GENERATE BILL.\n");
        printf ("PRESS ANYKEY to EXIT.\n");
        scanf ("%d", &choice);
        switch(choice)
        {
            
        }
    }
    
    return 0;
}