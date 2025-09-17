// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;

//     cout << "Enter a string: ";
//     getline(cin, str);  // takes input including spaces

//     cout << "Length of the string is: " << str.length() << endl;

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);  // read entire line

    int length = 0;
    // manually count characters
    for (char c : str) {
        length++;
    }

    cout << "Length of the string is: " << length << endl;

    return 0;
}
