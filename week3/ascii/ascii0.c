/**
 * ascii0.c - ASCII representation and math
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
#include <cs50.h>

int main(void){
    
    
    
    // print upper case letters
    printf("Upper case letters: ");
    for (int i = 'A'; i <= 'Z'; i++) {
        printf("%c", i);
    }
    printf("\n");
    
    // print upper case letters another way
    printf("Upper case letters again: ");
    for (int i = 65; i <= 90; i++) {
        printf("%c", i);
    }
    printf("\n");
    
    // print difference between upper and lower case letters
        printf("ASCII Math (option 1): %i - %i = %i\n", 'a', 'A', 'a' - 'A');    // option 1
        printf("ASCII Math (option 2): %c - %c = %c\n", 'a', 'A', 'a' - 'A');    // option 2
        printf("ASCII Math (option 3): %c - %c = %i\n", 'a', 'A', 'a' - 'A');    // option 3
}