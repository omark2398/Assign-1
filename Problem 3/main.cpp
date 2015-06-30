/* 
 * File:   main.cpp
 * Author: OmarKaayal
 *
 * Created on June 28, 2015, 4:58 PM
 */

#include <iostream>

using namespace std;

int purch = 52;
float stax = .04; //sales tax
float ctax = .02; //county tax
float purchs = (stax * purch);
float purchc = (ctax * purch);
float ttl = purchs + purchc ;
/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Purchase Price = " << purch << "$" << endl;
    cout << "Sales Tax = " << purchs << "$" << endl;
    cout << "County Tax = " << purchc << "$" <<endl;
    cout << "Total tax = " << ttl << "$" << endl;
    return 0;
}

