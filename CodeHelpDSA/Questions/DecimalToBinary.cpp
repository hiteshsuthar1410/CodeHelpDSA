//
//  DecimalToBinary.cpp
//  CodeHelpDSA
//
//  Created by Hitesh Suthar on 02/12/23.
//

#include "DecimalToBinary.hpp"
#include <iostream>
#include <math.h>
using namespace std;

int convertDecimaToBinary(int num) {
    
    int answer = 0;
    int i = 0;
    
    while (num != 0) {
        int currentBit = num & 1;
        
        answer = (currentBit * pow(10, i)) + answer;
        
        num = num >> 1;
        
        i++;
    }
    
    
    cout<<answer<<endl;
    return answer;
}
