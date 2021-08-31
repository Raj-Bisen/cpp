///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept string from user and return frequency of whitespaces from string.
//  input : Raj Ba BU
//  output :  2
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
		
		int CountWhites()
		{
			int iCnt = 0;
			while(*str != '\0')
			{
				if(*str == ' ')
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
	
	iRet = sobj.CountWhites();
	cout<<"Frequency of white space is : "<<iRet<<"\n";
	
	return 0;
	
}