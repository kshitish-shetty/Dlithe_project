#ifndef BILL_CACULATE_H
#define BILLCALCULATE_H

#include "struct.h"  // Include necessary header file for Node and Info definitions
// Default rate per unit

// Global variable to store the rate per unit
float RATE = 0.59;

// Calculate bill based on the given rate
float calculate_bill(Info* user) {
    int units_consumed = user->units;
    float total_bill = units_consumed * RATE;
    return(total_bill);
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
float update_rate(float newRate) {
    RATE=newRate;
    return(newRate);
}

#endif