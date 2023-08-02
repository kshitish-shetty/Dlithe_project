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
	printf("\t ---------------------------------------------------------------------------------\n");      
	printf("\t|                                                                                 |\n");
	printf("\t|  OOOOOO    OOOOOO  OOOOOO  OOOOOO  OOOOOO  OOOOOO  O      O  OOOOOOO   OOOOOO   |\n");
	printf("\t|  O         O    O  O       O         O       O     O O    O  O         O        |\n");
	printf("\t|  O  OOOOO  OOOOOO  OOOOO   OOOOO     O       O     O  O   O  O  OOOOO  OOOOOO   |\n");
	printf("\t|  O    O    O  O    O       O         O       O     O   O  O  O    O         O   |\n");
	printf("\t|  OOOOOO    O   O   OOOOOO  OOOOOO    O     OOOOOO  O    O O  OOOOOO    OOOOOO   |\n");
	printf("\t|                                                                                 |\n");                       
	printf("\t ---------------------------------------------------------------------------------\n");
 	printf("\t\t\t*************************************************\n");
	printf("\t\t\t*                                               *\n");
	printf("\t\t\t*         -----------------------------         *\n");
	printf("\t\t\t*          WELCOME TO ELECTRICITY BILL          *\n");
	printf("\t\t\t*                   GENERATOR                   *\n");
	printf("\t\t\t*         -----------------------------         *\n");
	printf("\t\t\t*                                               *\n");
	printf("\t\t\t*                                               *\n");
	printf("\t\t\t*                                               *\n");
	printf("\t\t\t*                                               *\n");
	printf("\t\t\t*         Brought To You By Team CP020          *\n");
	printf("\t\t\t*************************************************\n\n\n\t");
	for(i=0;i<80;i++)
	printf("-");
	printf("\n\t\t\tCurrent date and time : %s",ctime(&t));
	printf("\t");
	for(i=0;i<80;i++)
    printf("-");
	printf("\n\t\t    Press 'A' For ADMIN Login.      Press ANYKEY For MAIN MENU.\n");
	ch = getch();
	if(!(ch=='a'||ch=='A'))
		goto MainMenu;
	char username[10];//password[10];
	int flag=0;
	Admin:
	system("cls");   
	printf("\t");  
	for(i=0;i<80;i++){		
	    printf("-");
	}
	printf("\n \t   *****************************  |ADMIN LOGIN| ***************************** \n\t");
	for(i=0;i<80;i++){
		printf("-");
	}
	printf("\n\n\n\n");
	printf("\n\t\t\t\t----------------------------------");
	printf("\n\t\t\t\t|         ENTER USERNAME         |");
	printf("\n\t\t\t\t----------------------------------");
	printf("\n\t\t\t\t\t  ---> ");
	scanf("%s",username);
	printf("\n\t\t\t\t-----------------------------------");
	printf("\n\t\t\t\t|         ENTER PASSWORD          |");
	printf("\n\t\t\t\t-----------------------------------");
	printf("\n\t\t\t\t\t  ---> ");
	
	char password[]={'C','P','0','2','0','\0'};
	if(!strcmp(username,"ADMIN")&&!strcmp(password,"CP020"))	
		printf("\n\n\t\t\t\t\t  WELCOME ADMIN.\n\n\t");
	else{
		printf("\n\n\t\t\t\t    INCORRECT LOGIN CREDENTIALS.\n\n\t");
		flag=1;		
	}	
	for(i=0;i<80;i++)
    	printf("-");
	printf("\n\t\t\tCurrent date and time : %s",ctime(&t));
	printf("\t");
	for(i=0;i<80;i++)
    	printf("-");
	if(flag){
		printf("\n\t\t    Press 'H' For Home.             Press ANYKEY For RETRY.\n");
		ch = getch();
		if(ch=='h'||ch=='H')
			goto Home;
		else
			goto Admin;
	}
	else{
		system("cls");
		printf("WELCOME ADMIN");
		getch();
	}		

	while(1)     
	{	MainMenu:
		system("cls"); 
		printf("\t");    
		for(i=0;i<80;i++){		
            printf("-");
        }
		printf("\n \t  ******************************  |MAIN MENU|  ***************************** \n\t");
		for(i=0;i<80;i++){
	    	printf("-");
        }
		printf("\n");
		printf("\t\t\t    *Please enter your choice for menu*:");
		printf("\n");
		printf("\n\t\t\t    ------------------------------------");
		printf(" \n\t\t\t    | Enter 1 -> Enter Customer Details |");
		printf("\n\t\t\t    ------------------------------------");
		printf(" \n\t\t\t    | Enter 2 ->                        |");
		printf("\n\t\t\t    ------------------------------------");
		printf(" \n\t\t\t    | Enter 3 ->                        |");
		printf("\n\t\t\t    -------------------------------------");
		printf(" \n\t\t\t    | Enter 4 ->                        |");
		printf("\n\t\t\t    -------------------------------------");
		printf(" \n\t\t\t    | Enter 5 -> Return to Home Screen  |");
		printf("\n\t\t\t    -------------------------------------");
		printf(" \n\t\t\t    | Enter 6 -> Exit                   |");
		printf("\n\t\t\t    -------------------------------------\n");
		printf("\n\t");
		for(i=0;i<80;i++){
		    printf("-");
        }
	    printf("\n\t\t\tCurrent date and time : %s",ctime(&t));
        printf("\t");
		for(i=0;i<80;i++){
		    printf("-");
        }
        printf("\n\tSELECTION----> ");
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
				printf("\t -------------------------------------------------------------------------\n");
                printf("\t|                                                                         |\n");
                printf("\t|      OOOOOO     O     O        O        O       O    O  O    OOOOOO     |\n");
                printf("\t|        O        O     O       O O       O O     O    O O     O          |\n");
                printf("\t|        O        OOOOOOO      O O O      O  O    O    OO      OOOOOO     |\n");
                printf("\t|        O        O     O     O     O     O   O   O    O O          O     |\n");
                printf("\t|        O        O     O    O       O    O    O  O    O  O    OOOOOO     |\n");
                printf("\t|                                                                         |\n");
                printf("\t -------------------------------------------------------------------------\n");
				printf("\n\t\t\t    FOR USING OUR SERVICE !!!");
				printf("\n\n\t\t  Press 'Y' To CONTINUE.    Press 'N' To CANCEL.");
				ch=getch();
				if(ch=='N'||ch=='n')
				goto Home;
				else if(ch=='Y'||ch=='y')
				exit(0);
			default:
				system("cls");
				printf("\n\t\tInvalid Input");
				printf("\n\t  Press any key to continue");
				getch();
				break;
		}
	}
    return 0;
}
