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

void button(char *title,int size,int offset,int align){//align=0-->left align , align=1-->center align, align-->right align. 
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
			i=0;
			if(len%2==0){i--;} // for even titles prints on extra star.
			for(;i<=(size-(len)/2);i++){ . 
				printf(" ");
			}
			break;
		case 2:

			break;
	}
	printf("%s",title);
	switch(align){
		case 0:
			break;
		case 1:
			for(i=0;i<(size-(len+2)/2);i++){
				printf(" ");
			}
			break;
		case 2:
			break;
	}
	
	printf(" |\n");
	
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
	for(int i=0;i<80;i++)
		printf("-");
	time(&t);
	printf("\n\t\t\tCurrent date and time : %s",ctime(&t));
	printf("\t");
	for(int i=0;i<80;i++)
		printf("-");
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
	system("cls"); 
	if(choice_menu==0)
		header("ADMIN OPTIONS");
	else if(choice_menu=1)
		header("MAIN MENU");
	printf("\n\n\n");
	printf("\t\t\t         *Please select your choice*");
	printf("\n\n\n");
	printf("\n\t\t\t    -------------------------------------");
	switch(choice_menu){
		case 0:
			printf("\n\t\t\t    | PRESS 1 -> Change Base Tariff     |");
			printf("\n\t\t\t    -------------------------------------");
			printf("\n\t\t\t    | PRESS 2 -> Change Payment Deadline|");
			break;
		case 1:
			printf("\n\t\t\t    | PRESS 1 -> Input Customer Data    |");
			printf("\n\t\t\t    -------------------------------------");
			printf("\n\t\t\t    | PRESS 2 -> Generate Bill          |");
			break;
		default:
			printf("DISPLAY ERROR.");
			break;
	}
	printf("\n\t\t\t    -------------------------------------");
	printf("\n\t\t\t    | PRESS 3 -> Return to Home Screen  |");
	printf("\n\t\t\t    -------------------------------------");
	printf("\n\t\t\t    | PRESS 4 -> Exit                   |");
	printf("\n\t\t\t    -------------------------------------\n");
	printf("\n\n\n\n\n\t");
	for(int i=0;i<80;i++){
	    printf("-");
	}
	time(&t);
	printf("\n\t\t\tCurrent date and time : %s",ctime(&t));
	printf("\t");
	for(int i=0;i<80;i++){
	    printf("-");
	}
	printf("\n");
	char choice = getch();
	return choice;
}