#include<stdio.h>

int main(){
    int BirthYear, CurrentYear, Age;


    printf("Enter your birth year: ");
    scanf("%d", &BirthYear);


    printf("Enter the current year: ");
    scanf("%d", &CurrentYear);

    
    Age = CurrentYear - BirthYear;


    printf("your age is : %d\n", Age);
    return 0;
}