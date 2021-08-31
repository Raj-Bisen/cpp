///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept string from user and return frequency of A/a in string.
//  input : RajAbabu
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
		
		int CountAa()
		{
			int iCnt = 0;
			while(*str != '\0')
			{
				if((*str == 'a') || (*str == 'A'))
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
	
	iRet = sobj.CountAa();
	cout<<"Count of A/a  is : "<<iRet<<"\n";
	
	return 0;
	
}