//
//  main.cpp
//  algorithm-study
//
//  Created by Francisco Ponce on 10/12/17.
//  Copyright © 2017 Francisco Ponce. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    // Pointer to a char
    char * p1 = new char;
    
    // A constant pointer to a char
    char * const p2 = p1;
    
    // A pointer to a constant char
    const char * p3 = p1;
    
    // A constant pointer to a constant char
    const char * const p4 = p2;
    
    // A reference to a char
    char & ref1 = *p1;
    
    // A reference to a constant char
    const char & ref2 = *p4;
    
    // To have no warning at compilation for unused variables
    if( *p3 == ref1 ) { }
    if( *p3 == ref2 ) { }
    return 0;
}
