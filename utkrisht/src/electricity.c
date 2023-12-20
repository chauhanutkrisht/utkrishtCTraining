#include <stdio.h>
#include <stdlib.h>
 
#define RENTAL_CHARGE 250
#define PER_UNIT_RATE 4
#define SUBSIDY 150
struct Consumer {
    char name[50];
    int units_consumed;
}; 
void calculate_bill(struct Consumer *consumer) {
    float bill_amount;
 
    if (consumer->units_consumed < 0) {
        printf("Invalid units consumed. Please enter a positive integer.\n");
        exit(1);
    }
 
    if (consumer->units_consumed < 100) {
        bill_amount = RENTAL_CHARGE + (consumer->units_consumed * PER_UNIT_RATE) - SUBSIDY;
    } else {
        bill_amount = RENTAL_CHARGE + (consumer->units_consumed * PER_UNIT_RATE);
    }
 
    printf("\nConsumer Name: %s", consumer->name);
    printf("\nUnits consumed: %d", consumer->units_consumed);
    if (consumer->units_consumed < 100) {
        printf("\nSubsidy: Rs. %d", SUBSIDY);
    }
    printf("\nTotal Bill Amount: Rs. %.2f", bill_amount);
}