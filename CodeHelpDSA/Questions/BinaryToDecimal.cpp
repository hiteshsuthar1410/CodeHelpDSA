//
//  BinaryToDecimal.cpp
//  CodeHelpDSA
//
//  Created by Hitesh Suthar on 02/12/23.
//

#include <iostream>
#include <math.h>

using namespace std;

int convertBinaryToDecimal(int num) {
    int answer = 0;
    int iteration = 0;
    
    while(num != 0) {
        
        int digit = num % 10;
        
        if (digit == 1) {
            answer = pow(2, iteration) + answer;
        }
        
        num = num / 10;
        iteration++;
    }
    cout<<answer<<endl;
    return answer;
}

