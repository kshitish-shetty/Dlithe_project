#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
NOTE SETUP FOR ADMIN :
One can easily include the file name as header file 
#include "fileManage.h"
IF YOU CHOOSE TO USE THE ABOVE OPTION
you have to use the typedef struct <name> in a seperate header file and
include the struct header file in this header file.
    or 
copy the whole function on to the working file and 
call FILE-DRIVING FUNCTION
*/
// default struct add even more members
// typedef struct Info {
//     char name[30];
//     char ID[10];
//     int  units;
//     double amount;
// } Info;

/*
 OVERVIEW OF THE FUNCTION
 these are the auxillary methods used for the Print_driving of the method 
 printBilltoFile(Info* username)
 three auxillary methods are present to provide the interface for the Print_driving method
*/
static void print_(int howMuch , FILE* file){
/*-----this method is responsible to print dash ----*/
    fprintf(file,"\n");
    fprintf(file,"+");
    for (int dash = 0; dash < howMuch; dash++) {
        fprintf(file,"-");
    }
    fprintf(file,"+");
}
static void printHead_(int howMuch, FILE* file){
/*-----is responsible to print ELECTRICTY-BILL ----*/
    fprintf(file,"\n");
    for (int dash = 0; dash < howMuch/2; dash++) {
        fprintf(file,"-");
    }
    fprintf(file,"ELECTRICTY-BILL");
     for (int dash = 0; dash < howMuch/2; dash++) {
        fprintf(file,"-");
    }
    fprintf(file,"\n");
}
void printInFormat(Info* user,FILE* file){
/*-----this method is responsible to print all the user data to the file in format----*/
    int TILE_DASH = 26, DASH = 39;         // always we can adjust the size of the area heres 
    printHead_(TILE_DASH,file);
    print_(DASH,file);
    fprintf(file,"\nCustomer Name          : %s",user->name); // the struct name member should be accessed
    fprintf(file,"\nCustomer ID            : %d",user->ID); // the struct ID member should be accessed 
    fprintf(file,"\nMonth                  : %s","JAN-MAN"); // the struct Month member should be accessed
    print_(DASH,file);
    fprintf(file,"\nPrevious Meter Reading : %d unit",89); // the struct PMR member should be accessed
    fprintf(file,"\nCurrent Meter Reading  : %d unit",78); // the struct CMR member should be accessed
    fprintf(file,"\nTotal Units. Used      : %d unit",789); // the struct Total Units. member should be accessed
    fprintf(file,"\nEnergy Charges.        : %d unit",2345); // the struct Energy Charges. member should be accessed
    print_(DASH,file);
    fprintf(file,"\nYour Electricity BILL  : Rs. %lf ",8090.908); // the struct Total Amount calculated should be added
    print_(DASH,file);
}

int printBilltoFile(Info* username) {
/*-----INTERFACE FILE-DRIVING METHOD----*/
    Info* user_ = username;
    FILE* file_ = fopen("test2.txt","a");
    printInFormat(user_,file_);
    fclose(file_);
    return 0;
}
// int main() {
//     printBilltoFile(thisUser); // just use this funtion in the main()
// }                   ^^^^^^^^^ is the instance of the struct.
