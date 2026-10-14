/*
 * ==========================================================
 * Simple Shopping Calculator
 * Description: 
 * This C program asks the user for an item's price and quantity. 
 * It calculates the subtotal, applies a 10% discount if the total 
 * is 100 or more, and prints out a clean receipt.
 * ==========================================================
 */


#include <stdio.h>

void calculateTotal(float price, int many){
    float total = price * many;
    printf("----Receipt----\n\n");
    printf("Subtotal: $%.2f\n", total);

    if (total > 100){
        
        double discount = (total * 10) / 100;
        double ftotal = total - discount;
        
        printf("Discount (10%): $%.2f\n", discount );
        printf("Final Total: $%.2f", ftotal );        
    }
}


#include <stdio.h>

int main() {
    float x;
    int y;
    printf("Enter the item price: ");
    scanf("%f",&x);
    printf("Enter the quantity: ");
    scanf("%d",&y);
    calculateTotal(x,y);
    
    return 0;
}
