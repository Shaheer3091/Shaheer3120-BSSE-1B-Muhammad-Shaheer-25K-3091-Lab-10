#include <stdio.h>

int main() {

   
    char categories[3][20] = {
        "Appetizers",
        "Main Course",
        "Desserts"
    };

 
    char items[3][3][30] = {
        {"Garlic Bread", "Spring Rolls", "Bruschetta"},
        {"Grilled Chicken", "Pasta Alfredo", "Veggie Burger"},
        {"Ice Cream", "Brownie", "Cheesecake"}
    };
 
    float prices[3][3] = {
        {6.50, 8.00, 9.50},
        {15.99, 12.49, 9.75},
        {5.25, 7.99, 11.50}
    };

    printf("=========== RESTAURANT MENU ===========\n\n");

    
    for (int c = 0; c < 3; c++) {
        printf("---- %s ----\n", categories[c]);
        for (int i = 0; i < 3; i++) {
            printf("%-20s  $%.2f\n", items[c][i], prices[c][i]);
        }
        printf("\n");
    }

     
    printf(" Budget Friendly Items (Under $10)\n");

    for (int c = 0; c < 3; c++) { 
        for (int i = 0; i < 3; i++) {
            if (prices[c][i] < 10) {
                printf("%-20s  $%.2f   (%s)\n",
                       items[c][i], prices[c][i], categories[c]);
            }
        }
    }

    return 0;
}
