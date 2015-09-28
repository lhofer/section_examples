/**
 * cmd0.c - Prints the command line parameters
 *
 * CS50 | Section 1 | Week 3
 *
 * =+ 
 * 
 * Thanks to Eric Ouyang and Frederick Widjaja
 */
 
#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // print argc
    printf("argc: %i\n", argc);

    // print the elements inside of argv
    for (int i = 0; i < argc + 1; i++)
    {
        printf("argv %i: %s\n", i, argv[i]);
    }
}
