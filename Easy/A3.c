/*
Name:- Prashanth V Gowda

Date:- 18/11/2024

Description:- Given a string and an integer k, print the string in zigzag form.

Example
Input:- zigzagstring

Algo:- If kvalue = 2, zigzagstring = 010101010101 = all 0's and 1's seperated = zgasrnizgtig
If kvalue = 3, zigzagstring = 012101210121 = all 0's and 1's seperated = zarizgtiggsn

Output:- kvalue = 2:- zgasrnizgtig 
         Kvalue = 3:- zarizgtiggsn

Time:- O(n) + O(n) = O(n)
Space:- O(kvalue) + O(n) + O(n) = O(n + kvalue)

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void convertStringToZigZag(char* string, int kvalue)
{
    if (kvalue == 1)
    {
        printf("%s", string);
        return;
    }

    int stringLength = strlen(string);

    char** array = (char**)malloc(kvalue * sizeof(char*));

    for (int i = 0; i < kvalue; i++)
    {
        array[i] = (char*)malloc(stringLength * sizeof(char));
        array[i][0] = '\0';
    }

    int row = 0, direction = -1;

    for (int i = 0; i < stringLength; i++)
    {
        int arrayLength = strlen(array[row]);

        array[row][arrayLength] = string[i];
        array[row][arrayLength + 1] = '\0';

        if (row == 0 || row == kvalue - 1)
        {
            direction *= -1;
        }

        row += direction;
    }

    for (int i = 0; i < kvalue; i++)
    {
        printf("%s", array[i]);
        free(array[i]);
    }
}

int main()
{
    char string[] = "zigzagstring";
    int kvalue = 3;

    convertStringToZigZag(string, kvalue);

    return 0;
}