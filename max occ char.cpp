#include <iostream>
#include <string>
using namespace std;

char Max_O_Char(const string & str)
{
	int count[256]= {0}; // Assuming ASCII characters 0-256
	
	//Count occurrences of each character
	for (char ch : str)
	{
		count[ch]++;
	}
	char maxChar = '\0';
	int maxCount = 0;
	
	// Find the character with maximun occurrence
	for (int i =0; i < 256; i++) 
	{
		if (count[i] > maxCount) 
		{
			maxCount = count[i];
			maxChar = i;
		}
	}
	return maxChar;
}
int main() 
{
	char str[100];
	cout << "Enter a string: ";
	cin.getline(str, 100);
	
	char maxChar = getMaxOChar(str);
	
	cout << "Maximum Occuring Character: " << maxChar << endl;
	
}

