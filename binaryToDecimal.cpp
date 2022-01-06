// Binary To Deciaml Converter in C++
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    cout << "Enter binary number : 011... ";
    string binary; cin >> binary;
    int decimal = 0;
    int i = binary.length() - 1;
    while(i > -1){
        if('1' == binary[(binary.length() - 1) - i]) decimal += pow(2, i);
        i--;
    }
    cout <<  binary  << " = " << decimal;
    return 0;
}