/*4. Program to input seconds and convert seconds into hh:mm:ss format 
Test case 1: 
Enter the seconds 
4378 
The time in hh:mm:ss format is : 1:12:58 
Test case 2: 
Enter the seconds 738  
The time in hh:mm:ss format is : 0:12:18 */

#include <stdio.h>

void convert_seconds(int total_seconds);

int main() {
    int total_seconds;

    printf("Enter the seconds: ");
    scanf("%d", &total_seconds);

    convert_seconds(total_seconds);

    return 0;
}

void convert_seconds(int total_seconds) {
    int hours, minutes, seconds;

    hours = total_seconds / 3600;
    total_seconds %= 3600;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("The time in hh:mm:ss format is : %d:%d:%d\n\n", hours, minutes, seconds);
}