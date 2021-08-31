///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept string from user and convert lower case to upper case.
//  input : Raja
//  output :  RAJA
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
		
		void ConvertUpper()
		{
			
			while(*str != '\0')
			{
				if((*str >= 'a')&&(*str <= 'z'))
				{
					*str = *str - ('a' - 'A');
				}
				str++;
			}
			cout<<"After conveting uppercase string is :"<<Arr<<"\n";
		}
};

int main()
{
	int iRet = 0;
	StringX sobj;
	
	sobj.Accept();
	
	sobj.ConvertUpper();
	
	
	return 0;
	
}