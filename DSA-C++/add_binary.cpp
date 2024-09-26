
#include<iostream>
#include<vector>
using namespace std;
#include <string>  // for string data type
#include <sstream>  // for string stream


class Solution {
public:
    string addBinary(string a, string b) {
 string result = "";
    int carry = 0, i = a.size() - 1, j = b.size() - 1;
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        
        if (i >= 0) sum += a[i--] - '0'; // Convert char to int
        if (j >= 0) sum += b[j--] - '0'; // Convert char to int
        
        carry = sum / 2; // Determine the carry
        result += to_string(sum % 2); // Append the current bit to result
    }
    
    reverse(result.begin(), result.end()); // Since we appended from right to left, reverse the result
    return result;
}

    
};

/*

Runtime
0
ms
Beats
100.00

*/