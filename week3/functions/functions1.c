/**
 * arrays2.c - Letters in name
 *
 * CS50 | Section 1 | Week 3
 *
 * Thanks to Eric Ouyang and Frederick Widjaja
 *
 * =+
 *
 * Prints each character in the name on one line
 */
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = "Christopher";

    // replace the condition of the loop with a call to `strlen`
    for (int i = 0; i < 11; i++)
    {
        printf("%c\n", name[i]);
    }
}
