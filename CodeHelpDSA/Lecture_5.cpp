//
//  Lecture_5.cpp
//  CodeHelpDSA
//
//  Created by Hitesh Suthar on 09/11/23.
//

#include <iostream>
using namespace std;

void bitwiseOperators();
void forLoops();
void questions();


//int main() {
////    bitwiseOperators();
////    forLoops();
//    questions();
//    return 0;
//}

void bitwiseOperators() {
    int a = 4;
    int b = 6;
    
    cout<<"Value of a is "<<a<<" and b is "<<b<<endl;
    
    cout<<"a&b: "<<(a&b)<<endl;
    cout<<"a|b: "<<(a|b)<<endl;
    cout<<"~a: "<<(~a)<<endl;
    cout<<"a^b: "<<(a^b)<<endl;
}

void forLoops() {
    
    cout<<"Simple for loop: ";
    for(int i = 1; i<= 5; i++) {
        cout<<i;
    }
    cout<<endl;

    
    cout<<"No init, for loop: ";
    int j = 1;
    for(; j<= 5; j++) {
        cout<<j;
    }
    cout<<endl;
    
    cout<<"No init, no condition, for loop: ";
    j = 1;
    for( ; ; ) {
        cout<<j;
        if (j<= 5) {
            j++;
        } else {
            cout<<endl<<"Warning: Loop without condition require manual break to exit the loop";
            break;
        }
    }
    cout<<endl;
    
    cout<<"Multi init, multi condition, multi updation, for loop: "<<endl;
    for(int i = 10, j = 20; (i + j <= 100); i+= 10, j += 10) { // condition shold return a bool
        cout<<i<<"+"<<j<<"="<<i+j<<endl;
    }
    
    cout<<endl;
    
    cout<< "Use break to exit the loop"<<endl;
    cout<< "Use Continue to skip current iteration"<<endl;
    
    
}

void questions() {
    cout<<"Question 1"<<endl;
    for(int i=0; i<=5; i++) {
        cout<<i<<" ";
        i++;
    }
    
//    cout<<"Question 2"<<endl;
//    for(int i=0; i<=5; i--) {
//        cout<<i<<" ";
//        i++;
//    }
    cout<<endl;
    
    cout<<"Question 3"<<endl;
    for(int i=0; i<=15; i+=2) {
        cout<<i<<" ";
        
        if(i&1) { // if the value is any value other than 0 then it will be true including the negative numbers
            continue;;
        }
        i++;
    }
    
    cout<<endl;
    
//    cout<<"Question 4"<<endl;
//    for(int i=0; i<=5; i--) {
//        cout<<i<<" ";
//        i++;
//    }
//
//    cout<<endl;
    
    cout<<"Question 5"<<endl;
    for(int i=0; i<5; i++) {
        for(int j=i; j<=5; j++) {
            cout<<i <<" "<< j <<endl;
        }
    }
    
    
}
