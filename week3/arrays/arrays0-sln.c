/**
 * arrays0.c - Initializing arrays (Solution)
 *
 * CS50 | Section 1 | Week 3
 *
 * Thanks to Eric Ouyang and Frederick Widjaja
 *
 * =+ 
 * 
 * Let's declare some arrays
 */
 
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // create the integer array with elements {65, 87, 30}
    int nums[3];
    nums[0] = 63;
    nums[1] = 87;
    nums[2] = 30;
    
    printf("%i, %i, %i\n", nums[0], nums[1], nums[2]);

    // create the same array in shorthand
    int new_nums[] = {63, 87, 30};
    
    printf("%i, %i, %i\n", new_nums[0], new_nums[1], new_nums[2]);

}
