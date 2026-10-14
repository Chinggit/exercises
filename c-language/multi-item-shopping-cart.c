/*
  ==========================================================
 *Multi-Item Shopping Cart Calculator
 * Description: 
 * This C program asks the user how many items they are buying, 
  loops through each item to collect price and quantity, calculates 
  the grand total, applies a tiered discount, and prints a final receipt.

  try to run here:
  programiz link: https://www.programiz.com/online-compiler/3kBDQk14JAJ9Z
  ==========================================================
 */

#include <stdio.h>

void grandTotal(float total){
    printf("\n========== Final Receipt ==========\n");
    printf("Grand Total: %.2f\n",total);
    
    float new_val = 0;
    float ftotal;
    
    if (total >= 1000){
        new_val = (total * 15) / 100;
        printf("Discount (15%): $%.2f", new_val);
    }
    else if (total >= 100){
        new_val = (total * 10) / 100;
        printf("Discount (10%): $%.2f", new_val);
    }
    else{
        printf("Discount (0%): $%.2f", new_val);  
    }
    
    ftotal = total - new_val;
    printf("\nAmount due: $%.2f",ftotal);
}

int main() {
    int many,
        quantity = 0,
        user_many;
    
    float user_price,
          grand_total,
          x = 0;
        
    printf("How many items are you purchasing?: ");
    scanf("%d", &many);

    for(int i = 1; i <= many; i++){
        printf("\n====item %d====\n", i);
        
        printf("Enter price: ",i);
        scanf("%f", &user_price);
        
        printf("Enter quantity: ",i);
        scanf("%d", &user_many);
        
        float item_subtotal = user_price * user_many;
        grand_total += item_subtotal;
                             
    }
    
    grandTotal(grand_total);
    
    return 0;
}
