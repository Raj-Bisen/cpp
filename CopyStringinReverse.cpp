///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept string from user and copy that string in Reverse order.
//  input :  raj
//  output :jar
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
		
		void StringCReverse()
		{
			int iCnt = 0;
			while(*src != '\0')
			{
				src++;
				iCnt++;
			}
			src--;
			while(iCnt > 0)
			{
				*dest = *src;
				src--;
				*dest++;
				iCnt--;
			}
			*dest = '\0';
			cout<<"Reversed string is : "<<Brr<<"\n";
		}
		
		
};

int main()
{
	char Brr[40];
	
	StringX sobj;
	
	sobj.Accept();
	
	sobj.StringCReverse();
	
	return 0;
	
}