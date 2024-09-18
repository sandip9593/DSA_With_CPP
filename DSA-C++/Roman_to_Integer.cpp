#include<iostream>
#include<vector>
#include <map>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        map <char, int > m  = {
            {'I' , 1} , {'V' , 5}, {'X',10},
            {'L', 50}, {'C',100}, {'D',500}, 
            {'M',1000}
        };
        int  n = s.size() ; 

        
        int count = 0 ; 

         for (int i = 0; i < n; i++) {
           
            if (i < n - 1 && m[s[i]] < m[s[i + 1]]) {
                count -= m[s[i]];
            }
          
            else {
                count += m[s[i]];
            }
        }

        return count;
    }
};

/*


3999 / 3999 test cases passed.
Status: Accepted
Runtime: 3 ms
Memory Usage: 14.2 MB

*/