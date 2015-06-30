/* 
 * File:   main.cpp
 * Author: Omar Kaayal
 *
 * Created on June 29, 2015, 10:31 AM
 */

#include <iostream>

using namespace std;

float tank = 20; //tank size
float mpgtwn = 21.5;
float mpghw = 26.8;
float dsttwn = tank * mpgtwn; //distance traveled in town
float dsthw = tank * mpghw; //distance travelled on highway
        

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Distance travelled in town = " << dsttwn << " miles" << endl;
    cout << "Distance travelled on highway = " << dsthw << " miles" << endl;
    return 0;
}

