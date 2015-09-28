/**
 * binary-search0.c - Binary Search
 *
 * Computer Science 50
 * Week 4
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * =+
 * 
 * You'll be writing binary search for your problem set. Let's take a look
 * at how it works and implement binary search.
 */
#include <stdio.h>
#include <cs50.h>

#define NUM_TESTS 4

bool search(int needle, int haystack[], int size);

int main(void)
{
    //assign arrays to hold "needles" and results to print out later
    int needles[NUM_TESTS];
    bool results[NUM_TESTS];

    // test #0 -> is 15 in the array {1, 2, 5, 8, 11, 15, 21, 22, 31} ?
    int nums0[] = {1, 2, 5, 8, 11, 15, 21, 22, 31};
    int sz0 = 9;
    needles[0] = 5;
    results[0] = search(needles[0], nums0, sz0);

    // test #1 -> is 15 in the array {1} ?
    int nums1[] = {1};
    int sz1 = 1;
    needles[1] = 15;
    results[1] = search(needles[1], nums1, sz1);
    
    // test #2 -> is 1 in the array {} ?
    int nums2[] = {};
    int sz2 = 0;
    needles[2] = 1;
    results[2] = search(needles[2], nums2, sz2);

    // test #2 -> is 0 in the array {12, 13, 18, 23} ?
    int nums3[] = {12, 13, 18, 23};
    int sz3 = 4;
    needles[3] = 13;
    results[3] = search(needles[3], nums3, sz3);
    
    for (int i = 0; i < NUM_TESTS; i++) {
        if (results[i]) {
            printf("We found %i inside of the array #%i!\n", needles[i], i);
        }
        else {
            printf("Hmm. %i doesn't seem to be inside of array #%i...\n",needles[i],i);
        }
    }

}

// iteratively implemented binary search
bool search(int needle, int haystack[], int size)
{
    // write your code here
    return false;
}
