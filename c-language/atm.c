#include <stdio.h>

int main() {
    int tries = 3,
        input,
        pin = 2008,
        choice,
        balance = 67,
        deposit,
        withdraw;
    
    char again;
          
    // Loop PIN 
    while (tries > 0) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &input);
        
        if (input == pin) {
            printf("\n====== Access Granted ======\n");
            
            // Loop menu
            do {
                printf("\n1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice);
                
                switch (choice) {
                    case 1:
                        do {
                            printf("Enter the amount to deposit: ");
                            scanf("%d", &deposit);
                            if (deposit < 50) {
                                printf("Please deposit at least 50.\n");
                            }
                        } while (deposit < 50);
                        
                        balance = balance + deposit;
                        printf("\nYou deposited P%d. Your new balance is P%d\n", deposit, balance);
                        break;                      
                    case 2:                        
                            printf("Enter the amount to witdraw: ");
                            scanf("%d",&withdraw);
                            balance = withdraw - balance;
                        
                            if (withdraw > balance){
                                printf("\nInsuffecient Balance.\n");
                            }                       
                            else{
                               printf("Succesfully withdraw P%d, Your new balance P%d\n",withdraw,balance);
                             }
                        break;
                        
                    case 3:
                        printf("\nYour current balance is: P%d\n", balance);
                        break;
                        
                    case 4:
                        printf("\nThank you for using our ATM!\n");
                        return 0;
                        
                    default:
                        printf("\nInvalid choice. Please try again.\n");
                        break;
                }
                
                printf("\nWould you like another transaction? (Y/N): ");
                scanf(" %c", &again); 
                
            } while (again == 'Y' || again == 'y');
            
            // If user input other char than y
            printf("\nThank you! Have a great day.\n");
            return 0;
            
        // if user input wrong PIN  
        } else {
            tries--;
            if (tries > 0) {
                printf("Incorrect PIN. %d tries left.\n\n", tries);
            }
        }
    }
    //If user consumes tries
    printf("\nCard Blocked. Try again later.\n");
    return 0;
}
/*

░█▀▄▀█ ─█▀▀█ ░█▀▀▄ ░█▀▀▀ 　 ░█▀▀█ ░█──░█ 　 ───░█ ─█▀▀█ ░█──░█ ░█──░█ ░█▀▀▀ ░█▄─░█ 　 ░█▀▀█ ░█▀▀▀█ ░█▀▀█ ▀█▀ 
░█░█░█ ░█▄▄█ ░█─░█ ░█▀▀▀ 　 ░█▀▀▄ ░█▄▄▄█ 　 ─▄─░█ ░█▄▄█ ░█▄▄▄█ ─░█░█─ ░█▀▀▀ ░█░█░█ 　 ░█▄▄█ ░█──░█ ░█─▄▄ ░█─ 
░█──░█ ░█─░█ ░█▄▄▀ ░█▄▄▄ 　 ░█▄▄█ ──░█── 　 ░█▄▄█ ░█─░█ ──░█── ──▀▄▀─ ░█▄▄▄ ░█──▀█ 　 ░█─── ░█▄▄▄█ ░█▄▄█ ▄█▄

*/
