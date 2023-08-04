#ifndef STRUCT_H
#define STRUCT_H

<<<<<<< Updated upstream
=======
#include<string.h>
#include<stdlib.h>
>>>>>>> Stashed changes

typedef struct Info {
    char name[30];
    char ID[10];
    int month;
    int  units;
    double amount;
   struct Info *prev;
   struct Info *next;
}Info;

#endif
