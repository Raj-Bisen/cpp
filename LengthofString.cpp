///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept string from user and return length of string.
//  input : Raj
//  output :  3
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
		
		int StringLength()
		{
			int iCnt = 0;
			while(*str != '\0')
			{
				iCnt++;
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
	
	iRet = sobj.StringLength();
	cout<<"Length of string is : "<<iRet<<"\n";
	
	return 0;
	
}