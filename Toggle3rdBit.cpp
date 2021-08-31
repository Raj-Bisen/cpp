////////////////////////////////////////////////////////////////////////////////
// Accept number from user and Toggle 3rd bit of that number.
// input :        	 61          ,         9
// output :              57                   13
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
		unsigned int ToggleBits()
		{
			unsigned int iMask = 0x00000004;
			unsigned int Result = 0;
			
			Result = iNo ^ iMask;
			
			return Result;
			
		}
		
};

int main()
{
	int iret = 0;
	Binary obj;
	
	obj.Accept();
	iret = obj.ToggleBits();
	cout<<"After updation number is  : "<<iret<<"\n";
	
	
	return 0;
}