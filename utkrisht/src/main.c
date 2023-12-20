#include <stdio.h>
#include <stdlib.h>
 
#define RENTAL_CHARGE 250
#define PER_UNIT_RATE 4
#define SUBSIDY 150
 
struct Consumer {
    char name[50];
    int units_consumed;
}; 

 
int main() {
    struct Consumer consumer;
 
    printf("Enter consumer name: ");
    scanf("%s", consumer.name);
 
    printf("Enter units consumed: ");
    scanf("%d", &consumer.units_consumed);
 
    calculate_bill(&consumer);
 
    return 0;
}