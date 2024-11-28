/*
Name:- Prashanth V Gowda

Date:- 25/11/2024

Description:- Given an unsorted array containing manu duplicate elements,
              rearrange the given array such that the same element appears 
              together and relative order of the first occurance of each 
              elemnt remains unchanged.
              

Example
Input:- [1,2,3,1,2,1]


Output:- [1,1,1,2,2,3]

Time:- O(nlogn) + O(n) = O(nlogn)
Space:- O(n) + O(1) = O(n)
*/


#include <stdio.h>
#include <stdlib.h>

//  Function to compare two integers
int comparator(const void *a, const void *b)
{
    // Typecasting the void pointers to integer pointers
    return (*(int*)a - *(int*)b);
}

void sortedNumber(int array[], int arrayLength) //Space:- O(n) + O(1) = O(n)
{
    // Sort the array
    qsort(array, arrayLength, sizeof(int), comparator); // Time: O(nlogn), Space: O(1)

    for (int i = 0; i < arrayLength; i++) // Time: O(n)
    {
        printf("%d", array[i]);
    }
}

int main(void)
{
    int array[] = {1, 2, 3, 1, 2, 1};

    int arrayLength = sizeof(array) / sizeof(array[0]);

    sortedNumber(array, arrayLength);

    return 0;
}

