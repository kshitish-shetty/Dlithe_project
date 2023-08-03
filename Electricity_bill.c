#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>

#include"fileinput.h"

#define rate 0.59

//#include"struct.h"

void setConsoleSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowRect = { 0, 0, width - 1, height - 1 };
    COORD bufferSize = { width, height };

    SetConsoleWindowInfo(hConsole, TRUE, &windowRect);
    SetConsoleScreenBufferSize(hConsole, bufferSize);
}

int main(int argc,char **argv)
{   
    char choice,ch;
    int i,width=99,height=30;
	int pwCount=0;;
    time_t t;
	time(&t);
	SetConsoleTitle("Electricity Bill Generator");
    setConsoleSize(width,height);
    Home:
	system("cls");   // FOR CLEARING SCREEN
	printf("\n\t ---------------------------------------------------------------------------------\n");      
	printf("\t|                                                                                 |\n");
	printf("\t|  OOOOOO    OOOOOO  OOOOOO  OOOOOO  OOOOOO  OOOOOO  O      O  OOOOOOO   OOOOOO   |\n");
	printf("\t|  O         O    O  O       O         O       O     O O    O  O         O        |\n");
	printf("\t|  O  OOOOO  OOOOOO  OOOOO   OOOOO     O       O     O  O   O  O  OOOOO  OOOOOO   |\n");
	printf("\t|  O    O    O  O    O       O         O       O     O   O  O  O    O         O   |\n");
	printf("\t|  OOOOOO    O   O   OOOOOO  OOOOOO    O     OOOOOO  O    O O  OOOOOO    OOOOOO   |\n");
	printf("\t|                                                                                 |\n");                       
	printf("\t ---------------------------------------------------------------------------------\n\n");
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
	printf("\t\t\t*************************************************\n\n\t");
	for(i=0;i<80;i++)
	printf("-");
	printf("\n\t\t\tCurrent date and time : %s",ctime(&t));
	printf("\t");
	for(i=0;i<80;i++)
    printf("-");
	if(pwCount>2){
		printf("\n\t\t                 Press ANYKEY For MAIN MENU.\n");	
	}
	else
		printf("\n\t\t    Press 'A' For ADMIN Login.      Press ANYKEY For MAIN MENU.\n");
	ch = getch();
	if(!(ch=='a'||ch=='A')||pwCount>2)
		goto MainMenu;
	char username[20],password[20];
	Admin:
	system("cls");   
	printf("\n\t");  
	for(i=0;i<80;i++){		
	    printf("-");
	}
	printf("\n \t   *****************************  |ADMIN LOGIN| ***************************** \n\t");
	for(i=0;i<80;i++){
		printf("-");
	}
	printf("\n\n\n");
	printf("\n\t\t\t\t----------------------------------");
	printf("\n\t\t\t\t|         ENTER USERNAME         |");
	printf("\n\t\t\t\t----------------------------------");
	printf("\n\t\t\t\t\t    ");
	i=0;
	while ((ch = getch()) != 13) {
	    if (ch == 8) { // Backspace ASCII value
	        if (i > 0) {
	            // Move cursor back, overwrite the character with a space, and move cursor back again
	            printf("\b \b");
	            i--;
	        }
	    } else if (i < 20) {
	        username[i++] = ch;
	        printf("%c",ch);
	    }
	}
	username[i] = '\0';
	printf("\n\n\t\t\t\t-----------------------------------");
	printf("\n\t\t\t\t|         ENTER PASSWORD          |");
	printf("\n\t\t\t\t-----------------------------------");
	printf("\n\t\t\t\t\t    ");
	i=0;
    while ((ch = getch()) != 13) {
        if (ch == 8) { // Backspace ASCII value
            if (i > 0) {
                // Move cursor back, overwrite the character with a space, and move cursor back again
                printf("\b \b");
                i--;
            }
        } else if (i < 20) {
            password[i++] = ch;
            //printf("*");
        }
    }
    password[i] = '\0';
	if(!strcmp(username,"ADMIN")&&!strcmp(password,"CP020")){
		system("cls");
		printf("WELCOME ADMIN");
		getch();
	}
	printf("\n\n\n\t\t\t\t    INCORRECT LOGIN CREDENTIALS");
	printf("\n\n\n\t\t\t\t  %d Attempts Remain Before Lockout\n\n\t", 2-pwCount);
	pwCount++;			
	for(i=0;i<80;i++)
	printf("-");
	printf("\n\t\t\tCurrent date and time : %s",ctime(&t));
	printf("\t");
	for(i=0;i<80;i++)
    	printf("-");

	if(pwCount<3){
		printf("\n\t\t    Press 'H' For Home.             Press ANYKEY For RETRY.\n");
		ch = getch();
		if(ch=='h'||ch=='H')
			goto Home;
		else
			goto Admin;
	}
	else{
		printf("\n\t\t  Maximum Number Of Attempts Reached, Press ANYKEY For Home.\n");
		getch();
		goto Home;
	}		

	while(1)     
	{	MainMenu:
		system("cls"); 
		printf("\n\t");    
		for(i=0;i<80;i++){		
            printf("-");
        }
		printf("\n \t  ******************************  |MAIN MENU|  ***************************** \n\t");
		for(i=0;i<80;i++){
	    	printf("-");
        }
		printf("\n\n");
		printf("\t\t\t     *Please enter your choice for menu*");
		printf("\n\n");
		printf("\n\t\t\t    ------------------------------------");
		printf(" \n\t\t\t    | PRESS 1 -> Enter Customer Details |");
		printf("\n\t\t\t    ------------------------------------");
		printf(" \n\t\t\t    | PRESS 2 ->                        |");
		printf("\n\t\t\t    ------------------------------------");
		printf(" \n\t\t\t    | PRESS 3 ->                        |");
		printf("\n\t\t\t    -------------------------------------");
		printf(" \n\t\t\t    | PRESS 4 ->                        |");
		printf("\n\t\t\t    -------------------------------------");
		printf(" \n\t\t\t    | PRESS 5 -> Return to Home Screen  |");
		printf("\n\t\t\t    -------------------------------------");
		printf(" \n\t\t\t    | PRESS 6 -> Exit                   |");
		printf("\n\t\t\t    -------------------------------------\n");
		printf("\n\n\n\t");
		for(i=0;i<80;i++){
		    printf("-");
        }
	    printf("\n\t\t\tCurrent date and time : %s",ctime(&t));
        printf("\t");
		for(i=0;i<80;i++){
		    printf("-");
        }
		printf("\n");
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
				goto MainMenu;
				else if(ch=='Y'||ch=='y')
				exit(0);
			default:
				system("cls");
				printf("\n\n\n\n\t\t\t\t\tInvalid Input");
				printf("\n\t\t\t\t  Press any key to continue");
				getch();
				break;
		}
	}
    return 0;
}
