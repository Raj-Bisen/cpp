///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept string from user and reverse that string.
//  input :  raj
//  output :  jar
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
		
		void StringReverse()
		{
			char temp ;
			char *start , *end;
			
			start = str;
			end = str;
			
			while(*end != '\0')
			{
				end ++;
			}
			end--;
			while(start < end)
			{
				temp = *start;
				*start = *end;
				*end = temp;
				start++;
				end--;
			}
			cout<<"string after reverse :"<<Arr<<"\n";
		}
		
		
};

int main()
{
	int iRet = 0;
	StringX sobj;
	
	sobj.Accept();
	
	sobj.StringReverse();

	
	return 0;
	
}