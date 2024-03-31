#include <iostream>
using namespace std;

char *my_strchr( char *str, char ch)
{
	char *character=0;
	if(str!=NULL)
	{
	do {
		if(*str==ch)
		{
			character=str;
		}
	}
	while(*str++);	
}
    return character;
}

int main()
{
	char s2[]="Easy Code";
	cout<<"Character found "<<my_strchr(s2,'e');
	return 0;
}
