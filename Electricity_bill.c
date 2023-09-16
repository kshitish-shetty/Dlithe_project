#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h> // All necessary Inbuilt libraries.

#include"struct.h" // Structure and functions for handling linked lists.
#include"interface.h"// functions for the user interface.
#include"fileinput.h"// functions for taking from file and storing in linked lists.
#include"consoleinput.h"
#include"billconsole.h"
#include"fileoutput.h"

int main(int argc,char **argv)
{
    char choice,ch,put; // used to recieve user choices, "choice" for menus and "ch" for traversing interface.
	char username[20],password[20]; //strings to store user input at login menu.
	int i; // iteration variable.
    int width=99,height=30; // sets width and height of console window.
	int pw_count=0; // keeps track of wrong login attempts.
	int choice_admin=0,choice_main=0,login_flag=0,admin_exit=0;// flags to keep track of user choices.
	Info* head = NULL;
	float base = 0.589;
	int deadline = 0;
	SetConsoleTitle("Electricity Bill Generator");
    setConsoleSize(width,height);
    Home:
	choice = home(pw_count); // displays homepage and receives user choice.                           
	if(!(choice=='a'||choice=='A')||pw_count>2) // removes access to admin menu after 3 incorrect login attempts.
		goto MainMenu;
	Admin:
	if(login_flag) // checks if user is already logged in.
		goto AdminMenu; // if true skips login screen.
	system("cls");  
	header("ADMIN LOGIN");
	printf("\n\n\n\n");
	button("ENTER USERNAME",39,29,1,0);
	printf("\n\t\t\t\t\t    ");
	getString(username,20,0); //user defined function to recieve username without hiding characters.
	printf("\n");
	button("ENTER PASSWORD",39,29,0,0);
	printf("\n\t\t\t\t\t    ");
	getString(password,20,1); //user defined function to recieve username while hiding characters.
	if(strcmp(username,"ADMIN")||strcmp(password,"CP020")){
		printf("\n\n\n\t\t\t\t    INCORRECT LOGIN CREDENTIALS");
		printf("\n\n\n\t\t\t\t  %d Attempts Remain Before Lockout\n\n\t", 2-pw_count);
		pw_count++;
		footer();
		if(pw_count<3){
			printf("\n\t\t    Press 'H' For Home.             Press ANYKEY For RETRY.\n");
			ch = getch();
			if(ch=='h'||ch=='H')
				goto Home;
			else
				goto Admin;
		}		
		printf("\n\t\t  Maximum Number Of Attempts Reached, Press ANYKEY For Home.\n");
		getch();
		goto Home;
	}	
	do{
		login_flag=1;
		AdminMenu:
		choice = menu(0);
		switch(choice){
			case '1':
				system("cls");
				changeBaseTariff();
				break;
			case '2':
				goto Home;
			case '3':
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
	do
	{
		MainMenu:
        choice = menu(1);
        switch(choice) // SWITCH STATEMENT
		{
			case '1':
			    put = inputmenu(head);
				switch(put){
					case '1': 
						getUserData(&head);
						break;
					case '2':
						getFileInfo(&head);
						break;
				}
				break;
			case '2':
			    put = outputmenu();
				switch(put){
					case '1': 
					
					case '2':
						display_allBills(head);
						if(choice == '2'){
							break;
						}
					case '3':
						printBilltoFile(head);
						break;
				}
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
}	