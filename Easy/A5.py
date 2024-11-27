'''
Name:- Prashanth V Gowda

Date:- 27/11/2024

Description:- Given an unsorted arry, print all triplets in it
              with sum less than or equal to given number.

Example
Input:- [2,7,4,9,5,1,3]


Output:- {1,2,7} {1,3,5} {1,4,5} {2,3,5}

Time:- 
Space:- 

'''

def findTriplets(array: list, sum):
     
    rightIndex = len(array) - 1
    array.sort()

    for mainIndex in range(len(array) - 2):
         
         leftIndex = mainIndex + 1

         while(leftIndex < rightIndex):

            tripletSum = array[mainIndex] + array[leftIndex] + array[rightIndex]

            if tripletSum <= sum:
                print(f'Triplet equal to sum {array[mainIndex]}, {array[leftIndex]}, {array[rightIndex]}')
                leftIndex += 1

            else:
                rightIndex -= 1

array = [2,7,4,9,5,1,3]
sum = 10
findTriplets(array, sum)



