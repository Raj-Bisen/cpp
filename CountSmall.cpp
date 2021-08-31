///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept string from user and return frequency of small letters from string.
//  input : RajBaBU
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
		
		int CountSmall()
		{
			int iCnt = 0;
			while(*str != '\0')
			{
				if((*str >= 'a') && (*str <= 'z'))
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
	
	iRet = sobj.CountSmall();
	cout<<"Frequency of Small letter is : "<<iRet<<"\n";
	
	return 0;
	
}