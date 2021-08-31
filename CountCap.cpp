///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept string from user and return frequency of capital letters from string.
//  input : RajBaBU
//  output :  4
///////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

class StringX
{
	private :
		char Arr[40];
		char *str ;
		
	public :
		StringX()
		{
			this -> str = Arr;
		}
		
		void Accept()
		{
			cout<<"Enter the string\n";
			scanf("%[^'\n']s",Arr);
		}
		
		int CountCap()
		{
			int iCnt = 0;
			while(*str != '\0')
			{
				if((*str >= 'A') && (*str <= 'Z'))
				{
					iCnt++;
				}
				str++;
			}
			return iCnt;
		}
};

int main()
{
	int iRet = 0;
	StringX sobj;
	
	sobj.Accept();
	
	iRet = sobj.CountCap();
	cout<<"Frequency of capital letter is : "<<iRet<<"\n";
	
	return 0;
	
}