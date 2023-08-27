#include <stdio.h>
#include "interface.h"
#include "struct.h"
                                              
void main()
{
    //Info*Details=(Info*)malloc(sizeof(Info));
    header("INPUT");
    struct Info Details;
    printf("\n\n\n\n\n\t\t\t Customer Name :");//To get Customer Name
    scanf("%s",Details.name);
    printf("\n\n\n\n\n\t\t\t Customer ID   :");//To get Customer ID
    scanf("%s",Details.ID);
    printf("\n\n\n\n\n\t\t\t Units         :");//TO get Units
    scanf("%d",Details.units);
    printf("\n\n\n\n\n");
    footer();



}