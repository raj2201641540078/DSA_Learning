#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // reads whole line, including spaces

    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev = rev + str[i];
    }

    cout << "Reversed string: " << rev << endl;

    return 0;
}


// reverse(str.begin(),str,end());