#include <iostream>
#include <cstring>
using namespace std;



bool checkPalindrome(char str[]) {
    
    for(int i=0,j=strlen(str)-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        return false;
    }

    return true;

}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}