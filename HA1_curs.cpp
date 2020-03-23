// HA1_curs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


template <typename T>

T func(T arr[], int start_index, int end_index, T start_val = 0) {
    end_index = sizeof(arr);
    for (int i = start_index; i <= end_index; i++) {
        start_val += arr[i];
    }
    
    return start_val;
}



// HA 2
 template <typename T>

 T lambda_func(T arr[], int start_index, int end_index, T start_val = 0) {
     vector<T> v;
     for (int i = start_index; i <= end_index; i++) {
         v.push_back(arr[i]);
     }
     for_each(v.begin(), v.end(), [&start_val](T x) {start_val += x;});

     return start_val;

}


int main()
{
    int myarray[]{ 1, 3, 5, 6, 8 };
    cout << func <int>(myarray, 0, 4, 2);
    cout << endl;
    cout << lambda_func <int>(myarray, 0, 4, 2);

    return 0;
}

