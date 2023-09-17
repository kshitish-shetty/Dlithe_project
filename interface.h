#ifndef INTERFACE_H
#define INTERFACE_H

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

void setConsoleSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowRect = { 0, 0, width - 1, height - 1 };
    COORD bufferSize = { width, height };

    SetConsoleWindowInfo(hConsole, TRUE, &windowRect);
    SetConsoleScreenBufferSize(hConsole, bufferSize);
}

// function to print the header of a page with only input parameter being the input string.
void header(char *title){
	int len,i;
	printf("\n\t");
	for(i=0;i<80;i++){		
    	printf("-");
	}
	len = strlen(title);
	printf("\n \t  ");
	i=0;
	if(len%2==0){i--;} // for even titles prints on extra star.
	for(;i<=(37-(len+6)/2);i++){ // 74 total space. 
		printf("*");
	}
	printf("  |%s|  ",title);
	for(i=0;i<(37-(len+6)/2);i++){
		printf("*");
	}
	printf(" \t\n\t");
	for(i=0;i<80;i++){
		printf("-");
	}
}

void footer(){
	int i;
	time_t t; // stores time data.
	for(i=0;i<80;i++){
		printf("-");
	}	
	time(&t);
	printf("\n\t\t\tCurrent date and time : %s",ctime(&t));
	printf("\t");
	for(i=0;i<80;i++){
		printf("-");
	}
}	

/* function to print an option in the menu, which I'll be calling button here.
	title -> input string which will be printed inside the "button"
	size -> total length of "button"(if size is 0, it will fit a box with a space on either side of the string)
	offset -> the amount of blankspaces from the left side before creating the "button" 
	align -> decides alignment of text in button
				0 = left alignment
				1 = center alignment
				2 = right alignment
	stacking -> flag which will indicate if there is another "button" below it, 
				basically all "buttons" in menu will have this set as "1" except last one.

	size = 39 and offset = 29 centers the button and has been used as a standard.
*/
void button(char *title,int size,int offset,int align,int stacking){
	int len,i;
	len = strlen(title);
	if(size<len+4){size=len+4;}
	
	for(i=0;i<offset;i++){
		printf(" ");
	}
	for(i=0;i<size;i++){
		printf("-");
	}
	printf("\n");
	
	for(i=0;i<offset;i++){
		printf(" ");
	}
	printf("| ");

	switch(align){
		case 0:
			break;
		case 1:	
			for(i=0;i<(size-(len+4))/2;i++){
				printf(" ");
			}
			break;
		case 2:
			for(i=0;i<(size-(len+4));i++){
				printf(" ");
			}
			break;
	}
	printf("%s",title);
	
	switch(align){
		case 0:
			for(i=0;i<(size-(len+4));i++){
				printf(" ");
			}	
			break;
		case 1:
			i=0;
			if(len%2==0){i--;} // for even titles prints an extra space.
			for(;i<(size-(len+4))/2;i++){
				printf(" ");
			}
			break;
		case 2:
			break;
	}
	
	printf(" |\n");

	if(stacking){return;}
	
	for(i=0;i<offset;i++)
		printf(" ");
	for(i=0;i<size;i++)
		printf("-");
}

char home(int pw_count){
	time_t t;
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
	footer();
	if(pw_count>2){
		printf("\n\t\t                 Press ANYKEY For MAIN MENU.\n");	
	}
	else
		printf("\n\t\t    Press 'A' For ADMIN Login.      Press ANYKEY For MAIN MENU.\n");
	char choice = getch();
	return choice;
}

char exitPage(){
    system("cls");
    printf("\n\t -------------------------------------------------------------------------------\n");
    printf("\t|                                                                               |\n");
    printf("\t|        OOOOOOO     O     O        O        O       O    O  O    OOOOOO        |\n");
    printf("\t|           O        O     O       O O       O O     O    O O     O             |\n");
    printf("\t|           O        OOOOOOO      O O O      O  O    O    OO      OOOOOO        |\n");
    printf("\t|           O        O     O     O     O     O   O   O    O O          O        |\n");
    printf("\t|           O        O     O    O       O    O    O  O    O  O    OOOOOO        |\n");
    printf("\t|                                                                               |\n");
    printf("\t -------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t    FOR USING OUR SERVICE !!!");
    printf("\n\n\t\t\t  Press 'Y' To CONTINUE.    Press 'N' To CANCEL.");
    char choice = getch();
    return choice;
}

char menu(int choice_menu){
	time_t t;
	char choice;
	system("cls"); 
	if(choice_menu==0)
		header("ADMIN OPTIONS");
	if(choice_menu==1)
		header("MAIN MENU");
	printf("\n\n\n");
	printf("\t\t\t           *Please select your choice*");
	printf("\n\n\n");
	switch(choice_menu){
		case 0:
			button("PRESS 1 -> Change Base Tariff",39,29,0,1);
			button("PRESS 2 -> Return to Home Screen",39,29,0,1);
			button("PRESS 3 -> Exit",39,29,0,0);
			break;
		case 1:
			button("PRESS 1 -> Input Customer Data",39,29,0,1);
			button("PRESS 2 -> Generate Bill",39,29,0,1);
			button("PRESS 3 -> Return to Home Screen",39,29,0,1);
			button("PRESS 4 -> Exit",39,29,0,0);
			break;
		default:
			printf("DISPLAY ERROR.");
			break;
	}
	printf("\n\n\n\n\n\n\n\n\t");
	footer();
	printf("\n");
    choice = getch();
	return choice;
}

char inputmenu(Info* head){
	char choice;
	int len = findLength(head);
	system("cls");
	header("INPUT");
	printf("\n\n\n");
	printf("\t\t\t           *Please select Input format*");
	printf("\n\n\n");
	button("PRESS 1 -> Enter USER Details",39,29,0,1);
	button("PRESS 2 -> From FILE",39,29,0,0);
	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t         USER DETAILS PRESENT IN SYSTEM: %d",len);
	printf("\n\n\n\n\n\n\n\t");
	footer();
	printf("\n\t\t\t        PRESS ANYKEY TO RETURN TO MAIN MENU");
	printf("\n");
	choice = getch();
	return choice;
}

char outputmenu(){
	time_t t;
	char choice;
	Info* head = NULL;
	system("cls");
	header("OUTPUT");
	printf("\n\n\n");
	printf("\t\t\t           *Please select Output format*");
	printf("\n\n\n");
	button("PRESS 1 -> Console",39,29,0,1);
	button("PRESS 2 -> File",39,29,0,1);
	button("PRESS 3 -> Console & File",39,29,0,0);
	printf("\n\n\n\n\n\n\n\n\n\t");
	footer();
	printf("\n\t\t\t        PRESS ANYKEY TO RETURN TO MAIN MENU");	
	printf("\n");
	choice = getch();
	return choice;
}

#endif