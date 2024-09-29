//
// Created by Arvinderjeet singh on 9/29/2024.
//
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    string *str[2];
    str[0] = new string[2];
    str[1] = new string;
    str[0][0] = "Arvinderjeet";
    str[0][1] = "singh ";
    str[1][0]= "singh ";
    cout<<str[0][0]<<" "<<str[0][1]<<" "<<*str[0]<<" "<<*str[1];
    return 0;
}