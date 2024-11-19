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





#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* convertStringToZigzag(char *string, int kvalue)
{
    if (kvalue == 1)
    {
        return string;
    }

    int stringLength = strlen(string);
    char *zigzag = (char*) malloc(stringLength + 1);
    
    int index = 0;
    int row = 0, direction = -1;

    for (int i = 0; i < stringLength; i++)
    {
        zigzag[index++] = string[i];

        if (row == 0 || row == kvalue - 1)
        {
            direction *= -1;
        }
        row += direction;
    }

    zigzag[index] = '\0';
    return zigzag;
}

int main()
{
    char *string = "zigzagstring";
    int kvalue = 3;
    char *zigzag = convertStringToZigzag(string, kvalue);
    printf("%s \n", zigzag);
    free(zigzag);

    return 0;
}



#include<bits/stdc++.h>
using namespace std;

void printZigZagConcat(string str, int n)
{
	if (n == 1)
	{
		cout << str;	 
		return;
	} 

	int len = str.length();

	string arr[n];

	int row = 0;
	bool down;  

	for (int i = 0; i < len; ++i)
	{
		arr[row].push_back(str[i]);

		if (row == n-1)
		down = false;

		else if (row == 0)
		down = true;

		(down)? (row++): (row--);
	}

	for (int i = 0; i < n; ++i)
		cout << arr[i];
}

int main()
{
	string str = "GEEKSFORGEEKS";
	int n = 3;
	printZigZagConcat(str, n);
	return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printZigZagConcat(char* str, int n) {
    if (n == 1) {
        printf("%s", str);
        return;
    }

    int len = strlen(str);

    // Allocate memory for the rows
    char** arr = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        arr[i] = (char*)malloc((len + 1) * sizeof(char));
        arr[i][0] = '\0'; // Initialize the strings
    }

    int row = 0;
    int down = 1; // Boolean flag for direction

    for (int i = 0; i < len; ++i) {
        // Append the current character to the current row
        int len_row = strlen(arr[row]);
        arr[row][len_row] = str[i];
        arr[row][len_row + 1] = '\0';

        // Change direction if we reach the top or bottom row
        if (row == n - 1) {
            down = 0;
        } else if (row == 0) {
            down = 1;
        }

        // Move to the next row
        row += down ? 1 : -1;
    }

    // Print the concatenated rows
    for (int i = 0; i < n; ++i) {
        printf("%s", arr[i]);
        free(arr[i]); // Free the memory for each row
    }
    free(arr); // Free the memory for the array of rows
}

int main() {
    char str[] = "zigzagstring";
    int n = 3;
    printZigZagConcat(str, n);
    return 0;
}