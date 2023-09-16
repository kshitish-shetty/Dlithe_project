#ifndef CONSOLEINPUT_H
#define CONSOLEINPUT_H

#include <stdio.h>
#include "interface.h"
#include "struct.h"
#include "fileinput.h"

void getUserData(Info** head) {
    char name[21];
    char ID[21];
    char mon[3];
    char unit[10];
    int month;
    int units;
     system("cls");
    header("INPUT");
    printf("\n\n\n");
    button("Customer Name",39,29,1,0);
    printf("\n\t\t\t\t");
    getString(name,15,0);
    printf("\n");
    button("Customer ID",39,29,1,0);//To get Customer ID
    printf("\n\t\t\t\t");
    getString(ID,10,0);
    printf("\n");
    button("Month number (1-12)",39,29,1,0);
    printf("\n\t\t\t\t");
    getString(mon,2,0);
    month = atoi(mon);
    printf("\n");
    button("Units Consumed",39,29,1,0);//TO get Units
    printf("\n\t\t\t\t");
    getString(unit,8,0);
    units = atoi(unit);
    printf("\n\n\n\t");
    footer();
    append(head,name,ID,month,units,0);
    getch();
}

#endif