#include <iostream>

using namespace std ;

int main (){

    int arr[10] = {23,65,78,56,79,60,33,45,56,80};
     int count = 0 ; 
    for (int i = 0 ; i<=10 ; i++){
        if (arr[i] %2==0)
        {
           count = count +1;
        }
        
    }
     cout<<"the even eelement is :" << count <<endl ; 

}