/*
Name:- Prashanth V Gowda

Date:- 17/11/2024

Description:- Given a string find the first K non-repeating characters
in it by doing only single traversal of it

Example
Input:- ABCDBAGHCHFAC or ABCDZBAGHCHFACBICJBKI and K=3 

OUtput:- D G F or D Z G

Time:- O(n) + O(n) = O(n)
Space:- O(n) + O(1) = O(n)

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "ABCDZBAGHCHFACBICJBKI"; // Space = O(n)
    int charCount[256] = {0}; //Fixed size regardless of input size, Space = O(1)
    int stringLength = strlen(string);
    int kvalue = 3;
    int nonRepeatsFound = 0;
    
    for (int i = 0; i < stringLength; i++) // Time = O(n)
    {
        charCount[string[i]]++;
    }
    
    for (int i = 0; i < stringLength && nonRepeatsFound < kvalue; i++) // Time = O(n)
    {
        if (charCount[string[i]] == 1)
        {
            printf("%c", string[i]);
            nonRepeatsFound++;
        }
    }
    return 0;
}