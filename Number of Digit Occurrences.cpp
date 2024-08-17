/*Problem Statement



Vikas is working on a program to count the occurrences of a specific digit within a range of numbers. He needs to create a function that takes three inputs: the lower bound of the range (l), the upper bound of the range (u), and the digit to count (x).



The function should return the count of occurrences of the digit x within the range of numbers from l to u (both inclusive). Vikas wants to test his function by inputting the lower bound, upper bound, and the digit to count, and then printing out the result. Can you help Vikas write this program?



Example



Input:

2

13

3



Output:

2



Explanation:

The number of occurrences of digit 3 in the digits of numbers lying in the range [2, 13], both inclusive, is 2, i.e., (3, 13), hence 2 is returned.

Input format :
The first line consists of an integer l, representing the lower bound of the range.

The second line consists of an integer u, representing the upper bound of the range.

The third line consists of an integer x, representing the digit to count.

Output format :
The output prints an integer representing the count of occurrences of the digit x within the range of numbers from l to u (inclusive).



Refer to the sample output for the formatting specifications.

Code constraints :
0 ≤ l ≤ u ≤ 1000

I < u

0 < x < 9

Sample test cases :
Input 1 :
2
13
3
Output 1 :
2
Input 2 :
1 
100 
9
Output 2 :
20*/

#include <iostream>
#include <string>
using namespace std;

int countDigitOccurrences(int l, int u, int x) {
    int count = 0;
    char digit = '0' + x; // Convert digit to char for easy comparison

    for (int i = l; i <= u; i++) {
        string num = to_string(i); // Convert number to string
        for (char c : num) {
            if (c == digit) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int l, u, x;
    cin >> l >> u >> x;

    int result = countDigitOccurrences(l, u, x);
    cout << result << endl;

    return 0;
}
