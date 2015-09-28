/**
 * functions0.c - Square function
 *
 * CS50 | Section 1 | Week 3
 *
 * Thanks to Eric Ouyang and Frederick Widjaja
 *
 * =+ 
 * 
 * Write a function that squares a given integer input
 */
 
#include <stdio.h>
#include <cs50.h>

// your code goes here
int square(int input) 
{
    int output = input * input;
    return output;
}

int main(void)
{
    // test the square function
    printf("The square of %i is %i\n",  1,  square(1));
    printf("The square of %i is %i\n",  2,  square(2));
    printf("The square of %i is %i\n",  9,  square(9));
    printf("The square of %i is %i\n", 12,  square(12));
}
