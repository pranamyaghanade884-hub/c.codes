#include <stdio.h>

int main() {
    int money;

    printf("Enter how much money you have: ");
    scanf("%d", &money);

    if (money == 0) {
        printf("I will eat at home.\n");
    } 
    else if (money < 100) {
        printf("I will eat samosa.\n");
    } 
    else if (money >= 100 && money < 500) {
        printf("I will eat pizza.\n");
    } 
    else {
        printf("I will eat in hotel!\n");
    }

    return 0;
}
