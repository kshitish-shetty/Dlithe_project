#include "struct.h"   // Including the header file "struct.h"

#define RATE 0.59      // Defining a constant RATE with the value 0.59

int bill_calculate(struct Info Details)
{
    // Function to calculate the bill based on the given Details
    // Details is of type struct Info

    int TOTAL = RATE * Details.units;   // Calculating the total bill
    return TOTAL;                       // Returning the calculated total bill
}
