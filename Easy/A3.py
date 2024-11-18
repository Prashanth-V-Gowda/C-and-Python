'''
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

'''

def convertStringToZigzag(string: str, kvalue: int):

    if kvalue == 1:
        return string
    
    rows = [""] * kvalue # Space:- O(kvalue)
    row, direction = 0, -1

    for characters in string: # Time:- O(n) Spcae:- O(n)
        rows[row] += characters # Add the character to the current row

        if row == 0 or row == kvalue - 1:  # If we reach the top or bottom row, change the direction
            direction *= -1
        
        row += direction # Move to the next row

    return "".join(rows) # Time:- O(n) Spcae:- O(n), Join all the rows to get the final string

string = "zigzagstring"
kvalue = 3

convertedString = convertStringToZigzag(string, kvalue)
print(convertedString)
