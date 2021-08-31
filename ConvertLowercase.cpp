///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept string from user and convert upper case to lower case.
//  input : RajA
//  output :  raja
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
		
		void ConvertLower()
		{
			
			while(*str != '\0')
			{
				if((*str >= 'A')&&(*str <= 'Z'))
				{
					*str = *str + ('a' - 'A');
				}
				str++;
			}
			cout<<"After conveting lowercase string is :"<<Arr<<"\n";
		}
};

int main()
{
	int iRet = 0;
	StringX sobj;
	
	sobj.Accept();
	
	sobj.ConvertLower();
	
	
	return 0;
	
}