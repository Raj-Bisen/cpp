///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept string from user and return that  string.
//  input :     Raj
//  output :  Raj
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
			cout<<Arr<<"\n";
		}
};

int main()
{
	StringX sobj;
	
	sobj.Accept();
	
	sobj.Display();
	return 0;
}