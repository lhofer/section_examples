/**
 * arrays3.c - iterate through an unknown string (another way) (Solution)
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

int main(void) {
    
    // ask user for a string
    printf("enter a string: ");
    string s = GetString();
    
    // iterate through and print out
    int length = 0;
    while (s[length] != '\0')
    {
        printf("%c\n", s[length]);
        length++;
    }
}