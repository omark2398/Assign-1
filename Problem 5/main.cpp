/* 
 * File:   main.cpp
 * Author: OmarKaayal
 *
 * Created on June 29, 2015, 10:21 AM
 */

#include<iostream>
using namespace std;
 
int main() 
{
  char character; //list of data types
  int integer;
  float singlepnt;
  double doublepnt;
 
  string output;
 
  output = to_string(sizeof(character)) + ", " + to_string(sizeof(integer)) +
        ", " + to_string(sizeof(singlepnt)) + ", " +
        to_string(sizeof(doublepnt));
 
  cout << output; //displays the size of each data type
 
  return 0;
}
