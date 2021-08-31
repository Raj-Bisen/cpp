////////////////////////////////////////////////////////////////////////////////
// Accept number from user and display that number in binary.
// input :        	10
// output :      0	1	0	1
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Binary
{
	public :
		unsigned int iNo;
		
		Binary()
		{
			iNo = 0;
		}
		~Binary()
		{
			cout<<"\nInside destructor\n";
		}
		void Accept()
		{
			cout<<"Enter the number\n";
			cin>>iNo;
			
		}
		void DisplayBinary()
		{
			unsigned int iDigit = 0;
			while(iNo > 0)
			{
				iDigit = iNo % 2;
				cout<<iDigit<<"\t";
				iNo = iNo / 2;
			}
			
		}
		
};

int main()
{
	int iret = 0;
	Binary obj;
	
	obj.Accept();
	obj.DisplayBinary();
	
	
	return 0;
}