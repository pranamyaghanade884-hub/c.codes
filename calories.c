#include <stdio.h>

int main() {
    int choice, quantity;
    float calories;

    printf("===== CALORIE CALCULATOR =====\n");
    printf("1. Apple       - 52 cal per piece\n");
    printf("2. Banana      - 89 cal per piece\n");
    printf("3. Rice (100g) - 130 cal\n");
    printf("4. Milk (1 cup)- 150 cal\n");
    printf("5. Paneer (50g)- 130 cal\n");
    printf("===============================\n");
    

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    switch(choice) {
        case 1: calories = 52 * quantity; break;
        case 2: calories = 89 * quantity; break;
        case 3: calories = 130 * quantity; break;
        case 4: calories = 150 * quantity; break;
        case 5: calories = 130 * quantity; break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("Total Calories = %.2f cal\n", calories);

    return 0;
}