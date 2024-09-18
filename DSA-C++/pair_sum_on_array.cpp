#include <iostream>
using namespace std;
#include <limits.h>
#include <bits/stdc++.h>

int main()
{
    int arr[5] = {2, 3, 4, 1, 5}; // 3
    int val = 5;
    int count = 0;

    for (int i = 0; i < 6; i++)
    {

        for (int j = i + 1; j < 6; j++)
        {
            if ((arr[i] + arr[j]) == val)
            {
                count = count + 1;
            }
        }
    }
    cout << "the number of  pairs is " << count <<  endl;


}