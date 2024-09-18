#include<vector>
#include<string.h>
#include<string> 
#include<iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        const int a = haystack.size() ; 
        const int b =  needle.size() ; 

        for (int i = 0 ; i< a-b+1 ; i++) {
            if (haystack.substr(i,b) == needle){
                return i ; 
            }
        }
        return -1  ; 
    }
};


/*
submitted at Sep 17, 2024
Runtime  
0 ms


*/