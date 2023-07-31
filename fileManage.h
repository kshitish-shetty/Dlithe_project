/*
OBJECTIVES:

    i. take <file input>, preferably .csv
    ii. for every users' given data it has to produce the output as a 'BILL-INTERFACED' output.
    iii. the generated output has to be updated to file. 
        
        -----------------------------
       |<name>      |<unit-consumed> |
       |            |                |   
       |            |                |
       |            |                |
    iv. close file (don't forget!)
*/
#include <stdio.h>
// #include "infoStruct.h"


typedef struct Info {
    char name[30];
    char ID[10];
    int  units;
    double amount;
} Info;


Info thisUserin;

int isfileExists(FILE* fileName) {
    if (fileName != NULL){
        return 1;
    }
    //checks for the file pointer value. notNULL
    else {
        // if the filePointer is returning NULL 
        // meaning file is not loaded properly or 
        // file name error or file does not exists
        printf("FileDoesnotExits");
        return(-1);
    }
}

// char* fileReadString(char fromFile, int OF_LENGTH) {
//     char str[OF_LENGTH];
//     char* buffer;
//     buffer = fgets(str, OF_LENGTH + 1, fromFile);
//     return buffer;
// }
void printBilltoFile(Info* thisUserin){
    int flag, limit;
    char* buffer;
    FILE* file = fopen(strcat(thisUserin->name,".txt"), "a"); //(strcat(filename,".dt1"),"wt")// opening username file to print BILL to the file.
    // isfileExists(file);
    // flag  = fwrite(&thisUserin, sizeof(thisUserin),1,file);
    // while (limit < 30){
        // strcpy(buffer, printBilltoFile(thisUserin));
        // fprintf(file,"%s",buffer);
    //     limit++;
    // }
    
    fclose(file);
}

void printUserBill(Info* thisUserin){
    printf("This user named %s used %d units that cost him %lf money \n",thisUserin->name,thisUserin->units,thisUserin->amount);
}
