#include <stdio.h>

int main() {
    int choice, toss = 1; 

    printf("1. Heads\n2. Tails\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == toss)
        printf("You Win!\n");
    else
        printf("You Lose! It was Heads.\n");

    return 0;
}