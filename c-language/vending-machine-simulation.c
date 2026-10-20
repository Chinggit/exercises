#include <stdio.h>

int main() {

    int // Stocks
        mangjuan_stock = 0,
        piattos_stock = 5,
        feastables_stock = 5,
        bj_stock = 5,
        water_stock = 5,
        cola_stock = 5,
        // Prices
        mangjuan_price = 20,
        piattos_price = 30,
        feastables_price = 50,
        bj_price = 30,
        water_price = 10,
        cola_price = 20,

        user_input,
        inserted_money = 0,
        current_balance = 0,
        item_sold = 0;

    while (1) {

        if (mangjuan_stock == 0 && piattos_stock == 0 && feastables_stock == 0 &&
            bj_stock == 0 && water_stock == 0 && cola_stock == 0) {
            printf("\nVendo is out of stock, check again later\n");
            return 0;
        }

        item_sold = 0;

        printf("\n=== VENDING MACHINE ===\n\n");
        printf("Current Balance: P%d\n\n", current_balance);
        printf("1. mangjuan      P%d  (stock: %d) %s\n", mangjuan_price, mangjuan_stock, mangjuan_stock > 0 ? "" : "<- SOLD OUT");
        printf("2. piattos       P%d  (stock: %d) %s\n", piattos_price, piattos_stock, piattos_stock > 0 ? "" : "<- SOLD OUT");
        printf("3. feastables    P%d  (stock: %d) %s\n", feastables_price, feastables_stock, feastables_stock > 0 ? "" : "<- SOLD OUT");
        printf("4. buko juice    P%d  (stock: %d) %s\n", bj_price, bj_stock, bj_stock > 0 ? "" : "<- SOLD OUT");
        printf("5. water         P%d  (stock: %d) %s\n", water_price, water_stock, water_stock > 0 ? "" : "<- SOLD OUT");
        printf("6. cola          P%d  (stock: %d) %s\n\n", cola_price, cola_stock, cola_stock > 0 ? "" : "<- SOLD OUT");
        printf("7. Insert Money\n");
        printf("0. Money Return\n");

        printf("Select Option(0-7): ");

        scanf("%d", &user_input);

        
        while (!((user_input >= 0 && user_input <= 7) || user_input == 6767)) {
            printf("Invalid Choice, Try Again\n");
            printf("Select Option (0-7): ");
            scanf("%d", &user_input);
        }

        switch (user_input) {
            case 0: // Money Return
                if (current_balance == 0) {
                    printf("\nNo money to return.\n");
                }
                break;


            case 7: // Insert Money
                printf("Enter money amount: P");
                scanf("%d", &inserted_money);

                if (inserted_money != 1 && inserted_money != 5 && inserted_money != 10 && inserted_money != 20 && inserted_money != 50 && inserted_money != 100 && inserted_money != 200 && inserted_money != 500) {
                    printf("Machine only accepts 1, 5, 10, 20, 50, 100, 200, 500!\n");
                }
                else if (current_balance + inserted_money > 500) {
                    printf("Balance cannot go over P500.\n");
                }
                else {
                    current_balance = current_balance + inserted_money;
                    printf("Added P%d to balance.\n", inserted_money);
                }
                break;

            case 1: // Mang Juan
                if (mangjuan_stock <= 0) {
                    printf("\nSorry, out of stock!\n");
                } else if (current_balance < mangjuan_price) {
                    printf("\nInsufficient balance! Insert P%d more.\n", mangjuan_price - current_balance);
                } else {
                    printf("\nDispensing Mang Juan... Enjoy!\n");
                    current_balance = current_balance - mangjuan_price;
                    mangjuan_stock--;
                    item_sold = 1;
                }
                break;

            case 2: // Piattos
                if (piattos_stock <= 0) {
                    printf("\nSorry, out of stock!\n");
                } else if (current_balance < piattos_price) {
                    printf("\nInsufficient balance! Insert P%d more.\n", piattos_price - current_balance);
                } else {
                    printf("\nDispensing Piattos... Enjoy!\n");
                    current_balance = current_balance - piattos_price;
                    piattos_stock--;
                    item_sold = 1;
                }
                break;

            case 3: // Feastables
                if (feastables_stock <= 0) {
                    printf("\nSorry, out of stock!\n");
                } else if (current_balance < feastables_price) {
                    printf("\nInsufficient balance! Insert P%d more.\n", feastables_price - current_balance);
                } else {
                    printf("\nDispensing Feastables... Enjoy!\n");
                    current_balance = current_balance - feastables_price;
                    feastables_stock--;
                    item_sold = 1;
                }
                break;

            case 4: // Buko Juice
                if (bj_stock <= 0) {
                    printf("\nSorry, out of stock!\n");
                } else if (current_balance < bj_price) {
                    printf("\nInsufficient balance! Insert P%d more.\n", bj_price - current_balance);
                } else {
                    printf("\nDispensing Buko Juice... Enjoy!\n");
                    current_balance = current_balance - bj_price;
                    bj_stock--;
                    item_sold = 1;
                }
                break;

            case 5: // Water
                if (water_stock <= 0) {
                    printf("\nSorry, out of stock!\n");
                } else if (current_balance < water_price) {
                    printf("\nInsufficient balance! Insert P%d more.\n", water_price - current_balance);
                } else {
                    printf("\nDispensing Water... Enjoy!\n");
                    current_balance = current_balance - water_price;
                    water_stock--;
                    item_sold = 1;
                }
                break;

            case 6: // Cola
                if (cola_stock <= 0) {
                    printf("\nSorry, out of stock!\n");
                } else if (current_balance < cola_price) {
                    printf("\nInsufficient balance! Insert P%d more.\n", cola_price - current_balance);
                } else {
                    printf("\nDispensing Cola... Enjoy!\n");
                    current_balance = current_balance - cola_price;
                    cola_stock--;
                    item_sold = 1;
                }
                break;
        }

        
        if ((item_sold == 1 || user_input == 0 || user_input == 6767) && current_balance > 0) {
            printf("Dispensing change: P%d\n", current_balance);
            current_balance = 0;
        }

        if (user_input == 6767) {
            printf("\nMachine turned off.\n");
            return 0;
        }
    }

    return 0;
}
// JAYVEN L. CUTAD BSIT 1-1
