#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h> // All necessary Inbuilt libraries.

#include"struct.h" // library containing Struture and functions for creating and managing linked lists.
#include"interface.h"// library containing functions bundling all the print statements for the user interface.

int main(int argc,char **argv)
{   
    char choice,ch; // used to recieve user choices, "choice" for menus and "ch" for traversing interface.
	char username[20],password[20]; //strings to store user input at login menu.
	int i; // iteration variable.
    int width=99,height=30; // sets width and height of console window.
	int pw_count=0; // keeps track of wrong login attempts.
	int choice_admin=0,choice_main=0,login_flag=0,admin_exit=0;// flags to keep track of user choices.
    time_t t; // stores time data.
	time(&t);
	SetConsoleTitle("Electricity Bill Generator"); // 
    setConsoleSize(width,height);
    Home:
	choice = home(pw_count);                             ;
	if(!(choice=='a'||choice=='A')||pw_count>2)
		goto MainMenu;
	Admin:
	if(login_flag)
		goto AdminMenu;
	system("cls");   
	printf("\n\t");  
	for(i=0;i<80;i++){		
	    printf("-");
	}
	printf("\n \t  *****************************  |ADMIN LOGIN| ***************************** \n\t");
	for(i=0;i<80;i++){
		printf("-");
	}
	printf("\n\n\n");
	printf("\n\t\t\t\t----------------------------------");
	printf("\n\t\t\t\t|         ENTER USERNAME         |");
	printf("\n\t\t\t\t----------------------------------");
	printf("\n\t\t\t\t\t    ");
	getString(username,0);
	printf("\n\n\t\t\t\t-----------------------------------");
	printf("\n\t\t\t\t|         ENTER PASSWORD          |");
	printf("\n\t\t\t\t-----------------------------------");
	printf("\n\t\t\t\t\t    ");
	getString(password,1);
	if(!strcmp(username,"ADMIN")&&!strcmp(password,"CP020")){
		do{
			login_flag=1;
			AdminMenu:
			choice = menu(0);
			switch(choice){
				case '1':

				case '2':
					system("cls");
					printf("cumming soon. ;)");
					getch();
					break;
				case '3': 
					goto Home;
				case '4':
					admin_exit=1; 
					goto Exit;
				default:
					system("cls");
					printf("\n\n\n\n\t\t\t\t\tInvalid Input");
					printf("\n\t\t\t\t  Press any key to continue");
					getch();
					break;
			}
		}while(1);
	}
	printf("\n\n\n\t\t\t\t    INCORRECT LOGIN CREDENTIALS");
	printf("\n\n\n\t\t\t\t  %d Attempts Remain Before Lockout\n\n\t", 2-pw_count);
	pw_count++;			
	for(i=0;i<80;i++)
		printf("-");
	time(&t);
	printf("\n\t\t\tCurrent date and time : %s",ctime(&t));
	printf("\t");
	for(i=0;i<80;i++)
    	printf("-");
	if(pw_count<3){
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
	do     
	{	
		MainMenu:
        choice = menu(1);
        switch(choice) // SWITCH STATEMENT
		{	
			case '1':
			    
			case '2':
				system("cls");
				printf("cumming soon. ;)");
				getch();
				break;
			case '3':
			    goto Home;
			case '4':
				Exit:
				ch=exitPage();
				if(ch=='N'||ch=='n'){
					if(admin_exit==1){
						admin_exit=0;
						goto Admin;
					}
				goto MainMenu;
				}
				else if(ch=='Y'||ch=='y')
					exit(0);
			default:
				system("cls");
				printf("\n\n\n\n\t\t\t\t\tInvalid Input");
				printf("\n\t\t\t\t  Press any key to continue");
				getch();
				break;
		}
	}while(1);
	return 0;
}
