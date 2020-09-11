#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
	int num=550029;
	char newnum;
	for(int i=2; i<=num; i++)
	{
		if(num%i==0)
		{
			newnum=i;
			int counter=0;
			for(int j=newnum; j>=1; j--)
			{
				if(newnum%j==0)
				{
					counter++;
				}
			}
			if(counter==2)
			{
				cout<<newnum;
			}
		}
	}
	
	
	return 0;
}
