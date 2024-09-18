#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
      long long  reverse  =  0 ; 
      long long  newnum = x ; 

      if (x < 0){
        return false ;
      }

      while (x != 0 ) {
        reverse = reverse*10 + x%10 ; 
        x = x/10 ; 

      } 

      if (newnum == reverse ) {
        return true ; 
      }
      return false ;
    }
};

// 11511 / 11511 test cases passed.
// Status: Accepted
// Runtime: 18 ms
// Memory Usage: 8.6 MB