#include <iostream>
#include <string>
using namespace std;

void reverseWords(string& s) 
{
    int length;
    char ch1[30];
    for(int i=0;ch[i]!='\0';i++)
    {
    	length++;
	}
    
    cout<<length<<endl;
    
    for(int i=length-1;i>=0;i--)
    {
    	ch1[length - 1 - i] =ch[i];
    	cout << ch1[length - 1 - i];
	}
	cout<<endl;
    }
    
}

int main() {
    string s = "THIS IS A BIG STRING";
    
    cout << "Original sentence: " << s << endl;
    
    reverseWords(s);
    
    std::cout << "Reversed sentence: " << s << endl;
    
    return 0;
}
