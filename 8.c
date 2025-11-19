#include <stdio.h>

int main() {
    // -----------------------------
    // 1. Store menu categories + item names + prices
    // -----------------------------
    char *categories[3] = {"Appetizers", "Main Course", "Desserts"};

    char *items[3][3] = {
        {"Spring Rolls", "Garlic Bread", "Chicken Wings"},
        {"Grilled Chicken", "Beef Burger", "Pasta Alfredo"},
        {"Chocolate Cake", "Ice Cream Sundae", "Fruit Salad"}
    };

    float prices[3][3] = {
        {6.50, 4.00, 9.50},
        {12.99, 10.50, 8.99},
        {5.75, 7.25, 4.50}
    };

    // -----------------------------
    // 2. Display Complete Menu
    // -----------------------------
    printf("====== WELCOME TO OUR DIGITAL MENU ======\n\n");

    for(int c = 0; c < 3; c++) {
        printf("--- %s ---\n", categories[c]);
        for(int i = 0; i < 3; i++) {
            printf("%-20s  $%.2f\n", items[c][i], prices[c][i]);
        }
        printf("\n");
    }

    // -----------------------------
    // 3. Display Budget Friendly Options (< $10)
    // -----------------------------
    printf("====== BUDGET-FRIENDLY OPTIONS (Under $10) ======\n\n");

    for(int c = 0; c < 3; c++) {
        for(int i = 0; i < 3; i++) {
            if(prices[c][i] < 10) {
                printf("%-20s  $%.2f   (%s)\n", items[c][i], prices[c][i], categories[c]);
            }
        }
    }

    return 0;
}
