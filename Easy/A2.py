'''
Name:- Prashanth V Gowda

Date:- 17/11/2024

Description:- Given a string find the first K non-repeating characters
in it by doing only single traversal of it

Example
Input:- ABCDBAGHCHFAC or ABCDZBAGHCHFACBICJBKI and K=3 

OUtput:- D G F or D Z G

Time:- O(n) + O(n) = O(n)
Space:- O(n) + O(n) = O(n)

'''

from collections import Counter

def nonRepeatingChar(string: str, kvalue: int):
    stringLength = len(string) #Space: O(n)
    charCount = Counter(string) # Time: O(n), Space: O(n) print(charCount['A'], output = 3 )
    value = 0

    for charInString in range(stringLength): #Time: O(n), for each character in the string
        if value > kvalue - 1:
            break 
        if charCount[string[charInString]] == 1: # if the character is not repeating, if a character is repeating, the charCount will be more than 1
            print(string[charInString])
            value += 1

string = "ABCDZBAGHCHFACBICJBKI"
kvalue = 3

nonRepeatingChar(string, kvalue)
