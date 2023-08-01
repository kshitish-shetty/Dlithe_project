#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>
#include "structinfo.h"

#define MAX_LINE_LENGTH 128

Info readFile() {
    
    char *file_name;
    char line[MAX_LINE_LENGTH];
    Info *user;
    int userno=0;

    system("cls");
    printf("Enter file name: ");
   // scanf("%s",file_name);
    
   FILE *file;
   file = fopen("test.csv", "r");
    
    if (file==NULL) {
        printf("Error opening the file.\n");
    }
    
    while (fgets(line,MAX_LINE_LENGTH, file) != NULL) {
        printf("%s",line);
        char *data = strtok(line,",");
        printf("%s",data);
        getch();
        userno++;
    }

    fclose(file);

    return *user;
}

void main()
{
    Info *user;
   *user = readFile();
}