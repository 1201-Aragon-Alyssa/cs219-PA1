#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdint>
using namespace std;

class Calculator{
string Hex1, Hex2; 
public: 
    Calculator(); 
    Calculator(string, string); 
    Calculator(const Calculator &rhs); 

    void setHex1(const string&); 
    string getHex1() const; 
    void setHex2(const string&); 
    string getHex2() const; 

    void addition (const string, const string);
};
#endif