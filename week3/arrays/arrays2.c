/**
 * arrays2.c - Letters in name
 *
 * CS50 | Section 1 | Week 3
 *
 * Thanks to Eric Ouyang and Frederick Widjaja
 *
 * =+ 
 * 
 * Print each character in the name on one line
 */
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = "Christopher";

    // code here to print out each letter in his name
    for(int i = 0, length = strlen(name); i < length; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
    
}
