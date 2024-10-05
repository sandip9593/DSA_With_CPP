
#include <iostream>
#include <climits> 


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int low = 0 ; 
        int high = letters.size() - 1 ; 

        if (letters[0] > target  || target >= letters [letters.size()-1]){
            return letters[0] ;

        }
        char result ; 
        while (low <= high) {
            int mid = low +(high-low) / 2 ; 
            if (letters[mid] > target) {
                result = letters[mid] ; 
                high =mid-1 ; 
            }
            else {
                low = mid+1 ; 

            }
             
        }
        return result ;
        
    }
};