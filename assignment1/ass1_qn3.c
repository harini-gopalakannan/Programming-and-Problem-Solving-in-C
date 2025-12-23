/*3. Program to input the values of two variables a and b and swap / interchange the 
values.  
Test case 1: 
Enter the value of a 
10 
Enter the value of b 
20 
Before swapping: a = 10, b = 20 
After swapping: a = 20, b = 10 
Note: Values of variables must be updated. No marks will be awarded for simply changing 
the order of printing variables.*/

#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n\n", a, b);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}