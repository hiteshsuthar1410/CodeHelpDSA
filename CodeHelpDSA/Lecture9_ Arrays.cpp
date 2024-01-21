//
//  Lecture9_ Arrays.cpp
//  CodeHelpDSA
//
//  Created by Hitesh Suthar on 21/01/24.
//

#include "Lecture9_ Arrays.hpp"
#include <iostream>
using namespace std;

void arrayIntro() {
    
    
    // MARK: Syntax:
    ///_ dataTypeName nameOfArray [sizeOfTheArrayInSquareBrackets]
    
    int cars[4]; // This is count of array not the indexCount
    
    // Also not neccessary to specify the size of the array
    int myArray[] = {1, 2, 3, 4, 5};
    

    // Accessing element of array of int without initializing will print ***GARBAGE VALUE***
    cout<<"Cars: "<<cars[2]<<endl;
    
    int emptyArray[5] = { };
    cout<<emptyArray[3];
    ///_ NOTE: If we initialize array without elements. All the elements will have value 0
    
    string emptyStringArray[5] = { };
    cout<<"Empty Array of String"<<endl<<emptyStringArray[3];
    ///_ NOTE: If we the initialize array of string without elements. All the elements will have value "",
    
    
    int numbers[5] = { 1, 4 };
    ///_ NOTE: first two elements will have value 1 and 4 respectively. Rest of the elements will be initialized with 0

    ///_ It will return 0.
    cout<<numbers[3];
    
    ///_ It will return 4
    cout<<numbers[1];

}

// MARK: - Array as parameter : To pass the value of the array we first have to store it inside a variable then pass it in parameter
void arrayAsFunctionParameter(int arr[]) {
    cout<<arr;
}
/*
e.g. :
int myArray[] = {1, 2, 4};
arrayAsFunctionParameter(myArray);
 */

// MARK: - Bad Practise: Never declare an array with a size using a variable. Always use hard coded number to create an array
void arrayBadPractise() {
    int variable = 10000;
    int myArray[variable]; /** NEVER DO THIS **/
}
