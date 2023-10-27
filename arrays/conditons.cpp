#include <iostream>
using namespace std;
int main(){
    char c = '4';
    if (c>='a' && c<='z'){
        cout << "this is lower case";
    }
    if (c>='A' && c<='Z'){
        cout << "this is upper case";
    }
    if (c>='0' && c<='9'){
        cout << "this is numercail";
    }
}