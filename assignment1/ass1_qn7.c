/*7. You are given a certain amount of money in rupees, and you need to calculate the 
number of currency notes required to make that exact amount using the following 
denominations: 500 rupees, 200 rupees, 100 rupees, 50 rupees, and 10 rupees. If it is 
not possible to match the exact amount with the given denominations, calculate and 
display the maximum achievable amount and the remaining amount that cannot be 
represented. Write a C program that calculates and prints the number of notes needed 
for each denomination and handles the case where the exact amount cannot be 
matched. 
Test Case 1: 
 Input: amount = 1380 
 Expected Output: 
o 500 rupees notes: 2 
o 200 rupees notes: 1 
o 100 rupees notes: 1 
o 50 rupees notes: 1 
o 10 rupees notes: 3 
o Remaining amount: 0 
Test Case 2: 
 Input: amount = 125 
 Expected Output: 
o 500 rupees notes: 0 
o 200 rupees notes: 0 
o 100 rupees notes: 1 
o 50 rupees notes: 0 
o 10 rupees notes: 2 
o Remaining amount: 5 */

#include <stdio.h>

int main(){

    int amount;

    printf("Input: Amount = ");
    scanf("%d",&amount);

    int five_100 = amount/500;
    printf("500 rupees notes: %d\n",five_100);

    amount%=500;
    int two_100 = amount/200;
    printf("200 rupees notes: %d\n",two_100);

    amount%=200;
    int one_100 = amount/100;
    printf("100 rupees notes: %d\n",one_100);

    amount%=100;
    int fifty = amount/50;
    printf("50 rupees notes: %d\n",fifty);

    amount%=50;
    int ten = amount/10;
    printf("10 rupees notes: %d\n",ten);

    amount%=10;
    printf("Remaining amount: %d\n\n",amount);

    return 0;
}