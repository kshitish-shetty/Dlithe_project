#include "struct.h"  // Include necessary header file for Node and Info definitions
#include "consoleinput.h"
// Default rate per unit
#define DEFAULT_RATE 0.59

// Global variable to store the rate per unit
float RATE = DEFAULT_RATE;

// Calculate bill based on the given rate
float calculate_bill(Node* node) {
    int units_consumed = node->data.units;
    float total_bill = units_consumed * RATE;
    return total_bill;
}

// Update the rate per unit using user input
void update_rate() {
    printf("Enter the new rate per unit: ");
    scanf("%f", &RATE);
    printf("Rate per unit updated to: %.2f\n", RATE);
}
