///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept string from user and copy that string.
//  input :  raj
//  output : raj
///////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

class StringX
{
	private :
		char Arr[40];
		char Brr[40];
		char *src , *dest;
		
	public :
		StringX()
		{
			this -> src = Arr;
			this -> dest = Brr;
		}
		
		void Accept()
		{
			cout<<"Enter the string\n";
			scanf("%[^'\n']s",Arr);
		}
		
		void StringCopy()
		{
			while(*src != '\0')
			{
				*dest = *src;
				src++;
				dest++;
			}
			*dest = '\0';
			cout<<"After copying string is :"<<Brr<<"\n";
		}
		
		
};

int main()
{
	char Brr[40];
	
	StringX sobj;
	
	sobj.Accept();
	
	sobj.StringCopy();
	
	return 0;
	
}