#include <iostream>
#include <string>
using namespace std;

int main() {
	char str1[10],str2[10],temp[10];
	cout<<"\nEnter the First String: ";
	gets(str1);
	cout<<"Enter the Second String: ";
	gets(str2);
	 (temp,str1);
	 (str1,str2);
	 (str2,temp);
	 
	cout<<"\nAfter Swapping:\n";
	cout<<"\nFirst String: "<<str1;
	cout<<"\nSecond string:"<<str2;
	
	cout<<endl;
	return 0;
}

