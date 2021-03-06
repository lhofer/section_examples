/**
 * bubble-sort0.c - Bubble sort
 *
 * Computer Science 50
 * Week 4
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * =+
 * 
 * Implement bubble sort!
 */
#include <stdio.h>
#include <cs50.h>
#include "helpers.h"

#define NUM_TESTS 4


void bubble_sort(int arr[], int size);
void print_array(int arr[], int size);

int main(void)
{
    int nums0[] = {31, 2, 5, 15, 21, 22, 11, 8, 1};
    int sz0 = 9;
    print_array(nums0, sz0);
    bubble_sort(nums0, sz0);
    print_array(nums0, sz0);

    int nums1[] = {1};
    int sz1 = 1;
    print_array(nums1, sz1);
    bubble_sort(nums1, sz1);
    print_array(nums1, sz1);

    int nums2[] = {};
    int sz2 = 0;
    print_array(nums2, sz2);
    bubble_sort(nums2, sz2);
    print_array(nums2, sz2);

    int nums3[] = {18, 23, 12, 13};
    int sz3 = 4;
    print_array(nums3, sz3);
    bubble_sort(nums3, sz3);
    print_array(nums3, sz3);
}



// implementation of bubble sort that sorts a given array
void bubble_sort(int arr[], int size)
{
    // write your code here
}



void print_array(int arr[], int size)
{
    printf("{");
    if (size > 0)
    {
        for (int i = 0; i < size - 1; i++)
        {
            printf("%i, ", arr[i]);
        }
        printf("%i", arr[size - 1]);
    }
    printf("}\n");
}