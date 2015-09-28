/**
 * arrays0.c - Initializing arrays
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
    // <type> <name>[]
    // create the integer array with elements {65, 87, 30}
    int numbers[3];
    numbers[0] = 65;
    numbers[1] = 87;
    numbers[2] = 30;
    
    // create the same array in shorthand
    int numbers[] = {65, 87, 30};
}
