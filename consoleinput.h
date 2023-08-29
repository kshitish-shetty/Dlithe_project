#include <stdio.h>
#include "interface.h"
#include "struct.h"

Info* getUserData() {
    header("INPUT");

    Info* details;
    details = (Info*) malloc(sizeof(Info));
    printf("\n\n\n\n\n\t\t\t\t Customer Name :");//To get Customer Name
    scanf("%s",details->name);
    printf("\n\t\t\t\t Customer ID   :");//To get Customer ID
    scanf("%s",details->ID);
    printf("\n\t\t\t\t Units         :");//TO get Units
    scanf("%d",&details->units);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t");
    footer();
    printf("\n");
    getch();
    return details;
}