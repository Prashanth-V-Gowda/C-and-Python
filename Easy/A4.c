/*
Name:- Prashanth V Gowda

Date:- 21/11/2024

Description:- Given a string, find the longest substring of given string
              containing distinct characters

Example
Input:- abbcdafeeg

Algo:-

Output:- bcdafe

Time:- O(n) + O(n) = O(n)
Space:- O(1) + O(n) + O(n) = O(n)

*/

#include <stdio.h>
#include <string.h>


void longestSubstringinString(char *string, char *result)
{
    int stringLength = strlen(string); 
    int charString[256] = {0}; //Space:- O(1)
    int maxLengthOfSubstring = 0, startOfSubString = 0, endOfSubstring = 0, newStartOfSubString = 0;

    while (endOfSubstring < stringLength)  //Time:- O(n)
    {
        charString[string[endOfSubstring]]++; // Increment the count of the character in the string

        if (charString[string[endOfSubstring]] == 1) // If the character is not repeated
        {
            endOfSubstring++; // Move to the next character

            if (endOfSubstring - startOfSubString > maxLengthOfSubstring) 
            {
                maxLengthOfSubstring = endOfSubstring - startOfSubString; 
                newStartOfSubString = startOfSubString;
            }
        }
        else
        {
            while (string[startOfSubString] != string[endOfSubstring]) // If the character is repeated, Time:- O(n)
            {
                charString[string[startOfSubString]]--; // Decrement the count of the character in the string
                 startOfSubString++;    
            }
            startOfSubString++;
            endOfSubstring++;
        }
    }

    strncpy(result, string + newStartOfSubString, maxLengthOfSubstring);
    result[maxLengthOfSubstring] = '\0';
}

int main() {
    char str[] = "abbcdafeeg"; //Space:- O(n)
    char result[100]; //Space:- O(n)

    longestSubstringinString(str, result);
    printf("Longest substring with distinct characters: %s\n", result);

    return 0;
}
