#include <iostream>
#include <string>

using namespace std;

string compressString(string str) {
    string compressedString = "";
    int count = 1;

    for (int i = 0; i < str.length(); i++) {
        
        if (str[i] == str[i+1]) {
            count++;
        }
        else {
             compressedString += str[i] +  to_string(count);
             count = 1;
            
            }
    }

    return compressedString;
}

int main() {
    string input;

    cout << "AABCCCDDEEEEFF ";
    cin >> input;

    string compressedString = compressString(input);
    cout << "Compressed string: " << compressedString << endl;

    return 0;
}
