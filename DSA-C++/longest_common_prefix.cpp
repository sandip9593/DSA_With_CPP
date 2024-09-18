


#include<iostream>
#include<vector>
#include<string.h>
#include<string> 
using namespace std;





class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string count  = "" ; 

        if (strs.empty()) {
            return "" ; 
        }
        
        string prefix = strs[0] ; 
 

        for (int  i = 1 ; i<strs.size() ; i++) {
            
            while ( strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0 , prefix.length() - 1 ) ; 
            }
        }
        return prefix  ; 
        
    }
};

/*
Runtime
0 ms
Beats
100.00%


*/