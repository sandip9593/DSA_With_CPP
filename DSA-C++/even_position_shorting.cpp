#include <iostream>
using namespace std;
#include <limits.h>
#include <bits/stdc++.h>


int shortevent(int arr[], int n ) {
    int size = size +1 / 2 ; 
    int arr [n] ; 
    int index ; 
    for (int i ;  i < size ; i +=2 ) {
        if (arr[i] > arr[i+1]) {
            int temp = arr[i] ;
            arr[i] = arr[i+1] ;
            arr[i+1] = temp ;
            index ++ ;

        }

        

    for (int i = 0; i < 6; i++) { 
        if (arr[i] > arr[i + 2]) {
            swap(arr[i], arr[i + 2]);
        }
    }

}
}; 

int main() { 

    int n ; 
    int arr [n ] ; 

    for (int i = 0 ; i<n ; i++){
        cout << " " << arr[1] ; 
    }
    shortevent (arr , n ) ;

    for (int i = 0 ; i<n ; i++)
    {
            cout << arr[i] <<  " "; 



    }
    return 0 ;
    


}


