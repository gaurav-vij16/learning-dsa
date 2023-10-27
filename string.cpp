#include <iostream>
using namespace std;

int main()
{
    char str[100]; // Declare a character array to store the input
    cout << "Enter a line of text: ";

    // Read a line of text (including spaces) from the user
    cin >> str;

    // Display the input
    cout << "You entered: " << str << endl;

    return 0;
}