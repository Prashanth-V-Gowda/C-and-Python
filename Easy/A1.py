# Name:- Prashanth V Gowda

# Date:- 17/11/2024

# Description:- Given a string find the first K non-repeating characters
# in it by doing only single traversal of it

# Example
# Input:- ABCDBAGHCHFAC or ABCDZBAGHCHFACBICJBKI and K=3 

# OUtput:- D G F

# Time:-
# Space:- 

stringValue = "ABCDZBAGHCHFACBICJBKI"
kvalue = 3
foundRepeats = 0

for x in range(len(stringValue)):
    if foundRepeats > 5:
        break
    foundChar = 0
    for y in range(len(stringValue)):
        if x != y and stringValue[x] == stringValue[y]:
            foundChar = 1
            break
    if foundChar == 0:
        print(stringValue[x])
        foundRepeats += 1
        