#include <stdio.h>

int main() {
    int sum; // sum is uninitialized
    int average;

    // Taking average of number 1,2,3,4,5,6 :)
        for (int i = 1; i < 7; i++)
            sum = sum + i;


    average = sum / 5; // Calculate average
    printf("Sum = %d\n", sum);           // Print the final value of sum
    printf("Average = %d\n", average);   // Print the average
    return 0;
}
