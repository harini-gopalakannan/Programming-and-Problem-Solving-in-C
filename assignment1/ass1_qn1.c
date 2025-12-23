/*1. Program to convert temperature from Celsius to Fahrenheit and vice versa using the 
following formula: 
F = (C*9/5) +32 */

#include <stdio.h>
#include <stdint.h>

void fah_to_cel(void);
void cel_to_fah(void);

double cel,fah;

int main(){
    cel_to_fah();

    fah_to_cel();

    return 0;
}

void fah_to_cel(void)
{
    printf("Enter temperature in Fahreneit: ");
    scanf("%lf",&fah);

    cel= (fah-32.0)*(5.0/9.0);
    printf("Temperature in Celsius: %.2f \n\n",cel);

}

void cel_to_fah(void)
{
    printf("Enter temperature in Celsius: ");
    scanf("%lf",&cel);

    fah= (cel*(9.0/5.0))+32.0;
    printf("Temperature in Fahreneit: %.2f\n\n",fah);
}