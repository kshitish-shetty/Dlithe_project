#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>

#include"fileinput.h"

#define rate 0.59

//#include"struct.h"

int main(int argc,char **argv)
{   
    char choice,ch;
    int i;
    time_t t;
	time(&t);
	SetConsoleTitle("Electricity Bill Generator");
    Home:
	system("cls");   // FOR CLEARING SCREEN
	printf(" ---------------------------------------------------------------------------------\n");      
	printf("|                                                                                 |\n");
	printf("|  OOOOOO    OOOOOO  OOOOOO  OOOOOO  OOOOOO  OOOOOO  O      O  OOOOOOO   OOOOOO   |\n");
	printf("|  O         O    O  O       O         O       O     O O    O  O         O        |\n");
	printf("|  O  OOOOO  OOOOOO  OOOOO   OOOOO     O       O     O  O   O  O  OOOOO  OOOOOO   |\n");
	printf("|  O    O    O  O    O       O         O       O     O   O  O  O    O         O   |\n");
	printf("|  OOOOOO    O   O   OOOOOO  OOOOOO    O     OOOOOO  O    O O  OOOOOO    OOOOOO   |\n");
	printf("|                                                                                 |\n");                       
	printf(" ---------------------------------------------------------------------------------\n");
 	printf("\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*        WELCOME TO ELECTRICITY BILL            *\n");
	printf("\t\t*                 GENERATOR                     *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*       Brought To You By Team CP020            *\n");
	printf("\t\t*************************************************\n\n\n");
	for(i=0;i<80;i++)
	printf("-");
	printf("\nCurrent date and time : %s",ctime(&t));
	for(i=0;i<80;i++)
    printf("-");
	printf(" \n Press any key to continue:");
	getch();
	while(1)     // INFINITE LOOP
	{
		system("cls");     
		for(i=0;i<80;i++){		
            printf("-");
        }
		printf("\n   ******************************  |MAIN MENU|  ***************************** \n");
		for(i=0;i<80;i++){
	    	printf("-");
        }
		printf("\n");
		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter 1 -> Enter Customer Details");
		printf("\n----------------------------------");
		printf(" \n Enter 2 -> ");
		printf("\n----------------------------------");
		printf(" \n Enter 3 -> ");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -> ");
		printf("\n-----------------------------------");
		printf(" \n Enter 5 -> Return to Home Screen");
		printf("\n-----------------------------------");
		printf(" \n Enter 6 -> Exit");
		printf("\n-----------------------------------");
		printf("\n");
		for(i=0;i<80;i++){
		    printf("-");
        }
	    printf("\nCurrent date and time : %s",ctime(&t));
        for(i=0;i<80;i++){
		    printf("-");
        }
        printf("\nSELECTION----> ");
        choice = getch();
        switch(choice) // SWITCH STATEMENT
		{	
			case '1':
				
			case '2':
			    
			case '3':
			    
			case '4':
				system("cls");
				printf("cumming soon. ;)");
				getch();
				break;
			case '5':
			    goto Home;
			case '6':
				system("cls");
				printf(" -------------------------------------------------------------------------\n");
                printf("|                                                                         |\n");
                printf("|      000000     0     0        0        0       0    0   0   000000     |\n");
                printf("|        0        0     0       0 0       0 0     0    0  0    0          |\n");
                printf("|        0        0     0      0   0      0  0    0    00      0          |\n");
                printf("|        0        0000000     0000000     0   0   0    0 0     000000     |\n");
                printf("|        0        0     0    0       0    0    0  0    0  0         0     |\n");
                printf("|        0        0     0   0         0   0     0 0    0   0   000000     |\n");
                printf("|                                                                         |\n");
                printf(" -------------------------------------------------------------------------\n");
				printf("\n\t\t    FOR USING OUR SERVICE !!!");
				printf("\n\n\t  Press 'N' To CANCEL.    Press 'Y' To CONTINUE.");
				ch=getch();
				if(ch=='N'||ch=='n')
				goto Home;
				else if(ch=='Y'||ch=='y')
				exit(0);
			default:
				system("cls");
				printf(" Invalid Input");
				printf("\n Press any key to continue");
				getch();
				break;
		}
	}
    return 0;
}
