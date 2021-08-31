////////////////////////////////////////////////////////////////////////////////
// Accept number from user and off 3rd and 5th bit of that number.
// input :        	61
// output :              41
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
		unsigned int OffBits()
		{
			unsigned int iMask = 0xFFFFFFEB;
			unsigned int Result = 0;
			
			Result = iNo & iMask;
			
			return Result;
			
		}
		
};

int main()
{
	int iret = 0;
	Binary obj;
	
	obj.Accept();
	iret = obj.OffBits();
	cout<<"After updation number is  : "<<iret<<"\n";
	
	
	return 0;
}