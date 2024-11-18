/*
Name:- Prashanth V Gowda

Date:- 17/11/2024

Description:- Given a string find the first K non-repeating characters
in it by doing only single traversal of it

Example
Input:- ABCDBAGHCHFAC or ABCDZBAGHCHFACBICJBKI and K=3 

OUtput:- D G F

Time:-
Space:- 

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char stringValue[] = "ABCDZBAGHCHFACBICJBKI";
    int stringLength = strlen(stringValue);
    int foundRepeats = 0;

    for (int i = 0; i < stringLength && foundRepeats < 3; i++)
    {
        int foundChar = 0;
        for (int j = 0; j < stringLength; j++)
        {
            if (i !=j && stringValue[i] == stringValue[j])
            {
                foundChar = 1;
                break;
            }
        }
        if (foundChar == 0)
        {
            printf("%c", stringValue[i]);
            foundRepeats++;
        }
    }
}

/*
    printf("%d \n", stringLength);
    int stringLength2  = sizeof(string) / sizeof(string[0]);
    printf("%d \n", stringLength2);
    printf("%d \n", sizeof(string[0]));
*/