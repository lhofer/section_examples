/**
 * ascii1.c - upper and lower case letters (more ASCII math) (Solution)
 *
 * CS50 | Section 1 | Week 3
 *
 * Thanks to Eric Ouyang and Frederick Widjaja
 *
 * =+
 * 
 * on to ascii
 */

#include <stdio.h>
#include <string.h> // new library

int main(void){
    
    // set name array to a string
    char name[] = "leila"; 
    
    // change name to upper case
    for (int i = 0, j = strlen(name); i < j; i++)
    {
       name[i] = name[i] + ('A' - 'a');
       printf("%c", name[i]);
    }
    printf("\n");
}