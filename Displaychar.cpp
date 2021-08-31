///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept string from user and display characters from string.
//  input : Raj
//  output :  R
//                 a
//                 j
///////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class StringX
{
	private :
		char Arr[40];
		char * str;
	
	public :
		StringX()
		{
			this -> str = Arr;
		}
		void Accept()
		{
			cout<<"Enter the string \n";
			scanf("%[^'\n']s",Arr);
		}
		void Display()
		{
			while(*str != '\0')
			{
				cout<<*str<<"\n";
				str++;
			}
		}
};

int main()
{
	StringX sobj;
	
	sobj.Accept();
	
	sobj.Display();
	return 0;
}