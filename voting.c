#include <stdio.h>

int main() {
    int age;

start:   // ye label hai jahan par hum goto se wapas aa sakte hain
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age! Please enter again.\n");
        goto start;  // galat age par wapas input lene bhejta hai
    }

    if (age >= 18)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\n");

    return 0;
}
