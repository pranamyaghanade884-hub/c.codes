#include <stdio.h>

int main() {
    int choice;

menu:   // label for menu
    printf("\n--- Food Menu ---\n");
    printf("1. Pizza\n");
    printf("2. Burger\n");
    printf("3. Momos\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You ordered Pizza 🍕\n");
        goto menu;  // back to menu
    }
    else if (choice == 2) {
        printf("You ordered Burger 🍔\n");
        goto menu;
    }
    else if (choice == 3) {
        printf("You ordered Momos 🥟\n");
        goto menu;
    }
    else if (choice == 4) {
        printf("Thank you! Visit again 😊\n");
    }
    else {
        printf("Invalid choice! Try again.\n");
        goto menu;  // invalid choice par wapas menu pe bhejna
    }

    return 0;
}
