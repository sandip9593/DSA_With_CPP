


#include<vector>
#include<string.h>
#include<string> 
#include<iostream>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

      int n = digits.size() ; 

      for (int i = n-1 ; i>= 0 ; i--) {
       
        if ( digits[i] <9) {
             digits[i]++ ; 
             return digits ; 
        }
        else {
            digits[i] = 0 ; 
        }
      }
      digits.insert(digits.begin(),1) ; 
      return digits ;  

      

    }
};




/*

111 / 111 test cases passed.
Status: Accepted
Runtime: 0 ms
Memory Usage: 10.4 MB

*/