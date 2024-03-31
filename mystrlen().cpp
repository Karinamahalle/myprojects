#include <iostream>

using namespace std;
int my_strlen(const char *s)
{
	int count =0;
	while(*s!='\0')
	{
		count++;
		s++;
	}
	return count;
}

int main()
{
	char str[20]="Karina Mahalle";
	printf("Length of string a = %u \n", my_strlen(str));
	return 0;
}
