/*5. Sharon is traveling from city P to city Q. The distance between the two cities is a 
variable because she would like to use the equation for other cities also. She knows 
that she will be travelling half the distance at a speed of 40 miles per hour, and that 
the remaining half will be travelled at 55 miles per hour. Calculate the time that it will 
take to travel from one city to the next. 
Test Case 1: 
 Input: distance = 160 
 Expected Output: 
o Time for the first half =2 hours 
o Time for the second half ≈1.45 hours 
o Total Time: 2+1.45=3.45 hours */

#include <stdio.h>

int main() {
    float distance, half_distance;
    float speed1 = 40.0; // speed for the first half
    float speed2 = 55.0; // speed for the second half
    float time1, time2, total_time;

    // Input the distance between the two cities
    printf("Enter the distance between city P and city Q (in miles): ");
    scanf("%f", &distance);

    // Calculate half the distance
    half_distance = distance / 2.0;

    // Calculate time for the first half
    time1 = half_distance / speed1;

    // Calculate time for the second half
    time2 = half_distance / speed2;

    // Calculate total time
    total_time = time1 + time2;

    // Output the results
    printf("Time for the first half = %.2f hours\n", time1);
    printf("Time for the second half = %.2f hours\n", time2);
    printf("Total Time: %.2f hours\n\n", total_time);

    return 0;
}