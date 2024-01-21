//
//  MinMax.cpp
//  CodeHelpDSA
//
//  Created by Hitesh Suthar on 21/01/24.
//

#include "MinMax.hpp"
#include <iostream>

using namespace std;

int min(int arr[], int size);
int max(int arr[], int size);

void getMinMax() {
    
    int size;
    cout<<"Enter the size of array: ";
    cin >> size;
    int arr [100];
    
    cout<<"Enter "<<size<<" elements: ";
    for(int i = 0; i < size; i++) {
        cin>> arr[i];
    }
    
    cout<<"Min is: "<<min(arr, size)<<endl;
    cout<<"Max is: "<<max(arr, size)<<endl;
}

int min(int arr[], int size) {
    
    int min = INT_MAX;
    for(int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int max(int arr[], int size) {
    
    int max = INT_MIN;
    for(int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
