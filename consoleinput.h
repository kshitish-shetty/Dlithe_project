#ifndef CONSOLEINPUT_H
#define CONSOLEINPUT_H

#include <stdio.h>
#include "interface.h"
#include "struct.h"
#include "fileinput.h"

void getUserData(Info** head) {
    char* name;
    char* ID;
    int month;
    int units;
     system("cls");
    header("INPUT");
    printf("\n\n\n\n\n\t\t\t\t Customer Name :");//To get Customer Name
    getString(name,15,0);
    printf("\n\t\t\t\t Customer ID   :");//To get Customer ID
    getString(ID,10,0);
    printf("\n\t\t\t\t Billing Month (1-12)  :");
    scanf("%d",&month);
    printf("\n\t\t\t\t Units         :");//TO get Units
    scanf("%d",&units);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t");
    footer();
    append(head,name,ID,month,units,0);
    printf("\n");
    getch();
}

#endif