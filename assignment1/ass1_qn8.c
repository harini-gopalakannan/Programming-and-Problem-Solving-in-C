/*8. You need to calculate the total cost of painting a room with a given length, width, and 
height. The paint coverage is given in square meters per litre. The cost of paint is 
provided per litre. Consider the room has four walls and a ceiling, but not the floor. 
The final bill should include a discount and tax calculations. The output must be a 
detailed bill including quantity sold, price per item, amount, discount, discounted 
total, tax, and total amount. 
Test Case: 
Inputs: 
 Length of the room: 5.0 meters 
 Width of the room: 4.0 meters 
 Height of the room: 3.0 meters 
 Paint coverage: 12.0 square meters per litre 
 Cost per litre of paint: 40.0 Rs 
 Discount percentage: 15.0% 
 Tax percentage: 10.0% 
Output: 
******************* BILL **********************  
Quantity Sold: 6.17 litres  
Price per litre: Rs.40.00  -------------------------------------------------------------------------  
Amount: Rs.246.67  
Discount: Rs.37.00  
Discounted Total: Rs.209.67  
Tax: Rs.20.97  -------------------------------------------------------------------  
Total Amount: Rs.230.64*/

#include <stdio.h>

int main(){
    double length, width, height;
    double paint_coverage, cost_per_litre;
    double discount_percentage, tax_percentage;

    printf("Length of the room (in meters): ");
    scanf("%lf",&length);
    printf("Width of the room (in meters): ");
    scanf("%lf",&width);
    printf("Height of the room (in meters): ");
    scanf("%lf",&height);
    printf("Paint coverage (in square meters per litre): ");
    scanf("%lf",&paint_coverage);
    printf("Cost per litre of paint (in Rs): ");
    scanf("%lf",&cost_per_litre);
    printf("Discount percentage: ");
    scanf("%lf",&discount_percentage);
    printf("Tax percentage: ");
    scanf("%lf",&tax_percentage);

    double area_walls = 2 * height * (length + width);
    double area_ceiling = length * width;
    double total_area = area_walls + area_ceiling;

    double litres_needed = total_area / paint_coverage;
    double amount = litres_needed * cost_per_litre;
    double discount = (discount_percentage / 100.0) * amount;
    double discounted_total = amount - discount;
    double tax = (tax_percentage / 100.0) * discounted_total;
    double total_amount = discounted_total + tax;

    printf("\n******************* BILL **********************\n");
    printf("Quantity Sold: %.2f litres\n", litres_needed);
    printf("Price per litre: Rs.%.2f\n", cost_per_litre);
    printf("---------------------------------------------------------\n");
    printf("Amount: Rs.%.2f\n", amount);
    printf("Discount: Rs.%.2f\n", discount);
    printf("Discounted Total: Rs.%.2f\n", discounted_total);
    printf("Tax: Rs.%.2f\n", tax);
    printf("---------------------------------------------------\n");
    printf("Total Amount: Rs.%.2f\n\n", total_amount);

    return 0;
}