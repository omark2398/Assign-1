/* 
 * File:   main.cpp
 * Author: OmarKaayal
 *
 * Created on June 29, 2015, 10:42 AM
 */

#include <iostream>
#include <math.h>

using namespace std;

float board = 12.67; //cost to make
float profit = 1.4;
float price = roundf(board * profit);
/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Selling Price = $" << price;

    return 0;
}

