#include <iostream>
#include <string>
using namespace std;

string removeChars(string str1, string str2) {
    string result = "";
    bool charint[256] = {false}; // Assuming ASCII character set

    for (int i = 0; i < str2.length(); i++) {
        charint[str2[i]] = true;
    }

    for (int i = 0; i < str1.length(); i++) {
        if (!charint[str1[i]]) {
            result += str1[i];
        }
    }

    return result;
}

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
     getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    string result = removeChars(str1, str2);
    cout << "Result: " << result << endl;

    return 0;
}
