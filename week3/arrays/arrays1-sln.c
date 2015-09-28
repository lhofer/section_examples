/**
 * arrays1.c - Buggy arrays (Solution)
 *
 * CS50 | Section 1 | Week 3
 *
 * Thanks to Eric Ouyang and Frederick Widjaja
 *
 * =+ 
 * 
 * Finding the bug
 */
 
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string class[3] = { "Amy", "Brian", "Cathy" };

    // iterate through all the elements in the array
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", class[i]);
    }
}
