#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char ch[]="Prrrroggggraammiiing";
	int length = strlen(ch);
	int i,j,k;
	for( i=0;ch[i]!='\0';i++)
	{
		for(j=i+1;ch[j]!='\0';j++)
		{
			if(ch[i]==ch[j])
			{
				for(k=j; ch[k]!='\0';k++)
				{
					ch[k]=ch[k+1];
				}
				i--;
			}
	    }	
    }
    cout<<ch;
    return 0;
}

