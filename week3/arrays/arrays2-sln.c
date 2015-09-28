/**
 * arrays2.c - Letters in name (Solution)
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


int main(void)
{
    string name = "Christopher";

    // code here
    for (int i = 0; i < 11; i++)
    {
        printf("%c\n", name[i]);
    }
    
    // but what if any name length could be passed in?

}


