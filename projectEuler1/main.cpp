//
//  main.cpp
//  projectEuler1
//
//  Created by @author Francisco Ponce on 11/11/17.
//  Copyright © 2017 Francisco Ponce. All rights reserved.
//  This project explains the First challenge from Project Euler
//  (https://projecteuler.net/problem=1)


#include <iostream>
#include <chrono>

int aritmeticSerie(int limit, int step);
int findMultiplesNotOptimized(int limit);

/*
    Challenge: If we list all the natural numbers below 10 that are multiples
    of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
    Find the sum of all the multiples of 3 or 5 below 1000.
*/

// Iterate through the list of numbers, and sum the multiples of 3, multiples of 5, but
// substract the multiples of both 3 and 5.
int findMultiplesNotOptimized(int limit)
{
    int count = 0;
    int i = 1;
    while(3 * i < limit){
        count += 3 * i;
        i++;
    }
    
    i = 1;
    while(5 * i < limit){
        count += 5 * i;
        i++;
    }
    i = 1;
    while(3 * 5 * i < limit){
        count -= 3 * 5 * i;
        i++;
    }
    return count;
}

/**
 
 */
int aritmeticSerie(int limit, int step)
{
    int terms = int(limit / step);
    // This formula comes from the Artimetic series, where the sum of a finite arithmetic
    // progression is found by
    //
    //  S_n = n(a_1  + a_n)/2
    //
    // let a_n be a_n = a_1 + (n-1)d where d is the common difference of successive members.
    // Assuming a_n = d the formula is derived.
    return step * terms * (1 + terms) / 2;
}


int findMultiplesOptimized(int limit)
{
    int count = 0;
    count += aritmeticSerie(limit, 3);
    count += aritmeticSerie(limit, 5);
    count -= aritmeticSerie(limit, 15);
    
    return count;
}

int main(int argc, const char * argv[]) {
    // Iterative
    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Project Euler 1:" << findMultiplesNotOptimized(1000) << std::endl;
    auto stop = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = stop - start;
    std::cout << elapsed.count() * 1000 << std::endl;
    
    // Optimized
    start = std::chrono::high_resolution_clock::now();
    std::cout << "Project Euler 1 Optimized:" << findMultiplesOptimized(1000 - 1) << std::endl;
    stop = std::chrono::high_resolution_clock::now();
    elapsed = stop - start;
    std::cout << elapsed.count() * 1000 << std::endl;
    
    return 0;
}
