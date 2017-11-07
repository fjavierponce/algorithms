//
//  crash-course-2.cpp
//  algorithm-study
//
//  Created by Francisco Ponce on 11/6/17.
//  Copyright © 2017 Francisco Ponce. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    const size_t n = 2;
    
    // Create the array
    size_t ** array = new size_t * [n];
    
    for(size_t i=0 ; i<n ; i++)
        array[i] = new size_t[n];
    
    // Fill the array
    for(size_t i=0 ; i<n ; i++)
        for(size_t j=0 ; j<n ; j++)
            array[i][j] = i * n + j;
    
    // Test
    for(size_t i=0 ; i<n ; i++)
        for(size_t j=0 ; j<n ; j++)
            std::cout << "array[" << i << "," << j << "] = " << array[i][j] << std::endl;
}
