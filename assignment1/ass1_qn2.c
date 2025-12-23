/*2. Write a C program to find the sum of digits of a three-digit number 
Test case 1: 
Enter a single three-digit number 
257 
Sum is 14*/

#include <stdio.h>

void sum_of_3_digits(int num);  

int main() {
    int num;

    printf("Enter a single three-digit number: ");
    scanf("%d", &num);

    sum_of_3_digits(num);
    return 0;
}

void sum_of_3_digits(int num)
{
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum is %d\n", sum);
}
