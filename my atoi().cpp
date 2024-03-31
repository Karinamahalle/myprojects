#include <iostream>
using namespace std;

int myAtoi(char *p)
{
	int sign=1;
	int res=0;
	int i;
	if(p[i]=='-')
	{
		sign = -1;
		i++;
	}
	for(;p[i]!='\0';i++)
	{
		res = res *10 +(p[i] - '0');
	}
	return res*sign;
}
int main()
{
	char str1[]="-1234";
	int result= myAtoi(str1);
	cout<<result;
}

