/*
Name:- Prashanth V Gowda

Date:- 25/11/2024

Description:- Given an unsorted arry, print all triplets in it
              with sum less than or equal to given number.

Example
Input:- [2,7,4,9,5,1,3]


Output:- {1,2,7} {1,3,5} {1,4,5} {2,3,5}

Time:- 
Space:- 

*/

#include <stdio.h>
#include <stdlib.h>

int comparator(const void* a, const void* b)
{
    return (*(int*)a - *(int*) b);
}

void findTriplets(int array[], int arraySize, int sum)
{
    qsort(array, arraySize, sizeof(int), comparator);
    printf("Quick Sort Array: ");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");

    for (int i = 0; i < arraySize - 2; i++)
    {
        int leftIndex = i + 1;
        int rightIndex = arraySize - 1;

        while(leftIndex < rightIndex)
        {
            int currentSum = array[i] + array[leftIndex] + array[rightIndex];

            if (currentSum <= sum)
            {               
                printf("Triplets: {%d, %d, %d} \n", array[i], array[k], array[rightIndex]);
                leftIndex++;
            }
            else
            {
                rightIndex--;
            }
        }


    }
}


int main()
{
    int array[] = {2,7,4,9,5,1,3};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int sum = 10;

    findTriplets(array, arraySize, sum);

    return 0;
}