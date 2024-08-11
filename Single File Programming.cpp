/*Single File Programming Question
Problem Statement



You are given an integer array nums containing distinct numbers, and you can perform the following operations until the array is empty:



If the first element has the smallest value, remove it.
Otherwise, put the first element at the end of the array.


Return an integer denoting the number of operations it takes to make nums empty.



Example 1



Input: 

3

3 4 -1



Output: 

5



Explanation:





Example 2



Input:

4

1 2 4 3



Output:

5



Explanation:





Example 3



Input:

3

1 2 3



Output:

3



Explanation:

﻿

Input format :
The first line contains an integer N, the size of the array nums.

The second line contains N space-separated integers num[i], representing the elements of nums.

Output format :
The output displays an integer denoting the number of operations it takes to make nums empty.



Refer to the sample output for the formatting specifications.

Code constraints :
The given test case will fall under the following constraints:

2 ≤ N ≤ 10

-100 ≤ num[i] ≤100

Sample test cases :
Input 1 :
3
3 4 -1
Output 1 :
5
Input 2 :
4
1 2 4 3
Output 2 :
5
Input 3 :
3
1 2 3
Output 3 :
3
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.*/

#include <iostream>
#include <vector>
#include <algorithm> // for std::min_element

using namespace std;

int countOperationsToEmpty(vector<int>& nums) {
    int operations = 0;
    while (!nums.empty()) {
        // Find the smallest element in the array
        int minValue = *min_element(nums.begin(), nums.end());

        // Check if the first element is the smallest
        if (nums[0] == minValue) {
            // Remove the first element
            nums.erase(nums.begin());
        } else {
            // Move the first element to the end
            int firstElement = nums[0];
            nums.erase(nums.begin());
            nums.push_back(firstElement);
        }
        operations++;
    }
    return operations;
}

int main() {
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }

    cout << countOperationsToEmpty(nums) << endl;

    return 0;
}
