
#include <iostream>
using namespace std;

int main() {
    cout << "enter the array size : " ;
    int size1 ;
    cin >> size1 ;
    
    int arr[size1] ;
   int n = sizeof(arr)/sizeof(arr[0]);
   int key ;
  
    cout << "enter your array list : " <<endl  ; 
    
    for (int i = 0 ; i<size1 ; i ++){
        
        cin >> arr[i] ; 
    }
    
    cout << "enter your expected key :"<<endl ; 
    
     cin >> key ; 
    
   
    int count = 0;
    
    for (int i = 1; i < n ; i++) { 
        if (arr[i] == key ) {
            count++; 
        }
    }
    
    cout << "Number of duplicates: " << count << endl;
    return 0;
}