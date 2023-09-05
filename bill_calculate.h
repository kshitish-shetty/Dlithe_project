#ifndef BILL_CALCULATE_H
#define BILLCALCULATE_H

#include "struct.h"  // Include necessary header file for Node and Info definitions

float base = 0.059;

void changeBaseTariff(){
    system("cls");
    printf("enter updated base value: ");
    scanf("%f",&base);
}

// Calculate bill based on the given rate
void calculate_bill(Info* user) {

    int units_consumed = user->units;
    float total_bill = units_consumed * base;
    user->amount = total_bill;
}
/*
usage of the funcion:
    Info* user;
    user = (Info*) malloc(sizeof(Info));
    user->units = 89;
    user->amount = calculate_bill(user);
    printf("amount  : %lf\n",user->amount); // use %.2lf [double]

    update_rate(0.98);
*/


// Update the rate per unit using user input
// float update_rate(float newRate) {
    // RATE=newRate;
    // return(newRate);
// }

#endif