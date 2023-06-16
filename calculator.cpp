#include "calculator.h"

Calculator::Calculator(){
    Hex1 = "0A";
    Hex2 = "0A";
}
Calculator::Calculator(string num1, string num2){
    Hex1 = num1; 
    Hex2 = num2; 
}

Calculator::Calculator(const Calculator &rhs){
    Hex1 = rhs.Hex1;
    Hex2 = rhs.Hex2; 
}

void Calculator::setHex1(const string& hex) {
    Hex1 = hex;
}

void Calculator::setHex2(const string& hex) {
    Hex2 = hex;
}

string Calculator::getHex1() const {
    return Hex1;
}

string Calculator::getHex2() const {
    return Hex2;
}

void Calculator::addition(const string num1,const string num2){
    string hex1 = num1.substr(2);
    string hex2 = num2.substr(2);

    uint32_t value1 = 0;
    uint32_t value2 = 0;

    stringstream ss1;
    ss1 << hex << hex1;
    ss1 >> value1;

    stringstream ss2;
    ss2 << hex << hex2;
    ss2 >> value2;

    uint32_t sum = value1 + value2; 
    cout << "ADD " << num1 << " " << num2 << ": ";
    cout << "0x" << setw(8) << setfill('0') << hex << sum << endl;

    bool overflow = (sum < value1 || sum < value2);
    cout << "Overflow: " << (overflow ? "yes" : "no") << endl << endl;

} 

 