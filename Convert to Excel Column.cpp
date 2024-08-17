/*Problem Statement



Prasad is developing a program to convert a given integer into its corresponding Excel column name. He wants to create a function that takes an integer as input and returns its corresponding Excel column name. In Excel, column names are represented using capital letters from A to Z, and then AA, AB, and so on. For example, 1 corresponds to "A", 2 corresponds to "B", 26 corresponds to "Z", 27 corresponds to "AA", and so forth.



Prasad's function should handle the conversion accurately. Can you help Prasad write this program?



Note: Ensure that the returned string is in the upper case.

Input format :
The input consists of a single integer n, representing the column number.

Output format :
The output consists of a string representing the Excel column name corresponding to the given column number.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 5000

Sample test cases :
Input 1 :
956
Output 1 :
AJT
Input 2 :
26
Output 2 :
Z
Input 3 :
52
Output 3 :
AZ*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string convertToExcelColumn(int n) {
    string columnName = "";

    while (n > 0) {
        int remainder = (n - 1) % 26;  // Get the remainder for current character
        cout<<"remainder = "<<remainder<<endl;
        columnName += (remainder + 'A');  // Convert remainder to corresponding letter
        cout<<"columnName = "<<columnName<<endl;
        n = (n - 1) / 26;  // Update the number for the next iteration
        cout<<"n = "<<n<<endl;
    }

    reverse(columnName.begin(), columnName.end());  // Reverse the string to get the correct column name
    return columnName;
}

int main() {
    int n;
    cin >> n;

    string result = convertToExcelColumn(n);
    cout << result << endl;

    return 0;
}
