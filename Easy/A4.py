'''
Name:- Prashanth V Gowda

Date:- 26/11/2024

Description:- Given a string, find the longest substring of given string
              containing distinct characters

Example
Input:- abbcdafeeg

Algo:-

Output:- bcdafe

Time:- 
Space:- 

'''
from collections import Counter

def longestSubstring(string):
    charCount = Counter()
    startIndexOfstring = 0
    startIndexOfSubstring = 0
    maxLengthOfSubstring = 0


    for endIndexOfstring in range(len(string)):
        charCount[string[endIndexOfstring]] += 1

        while charCount[string[endIndexOfstring]] > 1:
            charCount[string[startIndexOfstring]] -= 1
            startIndexOfstring += 1

        if (endIndexOfstring - startIndexOfstring + 1 > maxLengthOfSubstring):
            maxLengthOfSubstring = endIndexOfstring - startIndexOfstring + 1
            startIndexOfSubstring = startIndexOfstring

    return string[startIndexOfSubstring: startIndexOfSubstring + maxLengthOfSubstring]

string = "abbcdafeeg"

nonRepeatingLongestSubString = longestSubstring(string)
print(nonRepeatingLongestSubString)





