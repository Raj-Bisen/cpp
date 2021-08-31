////////////////////////////////////////////////////////////////////////////////
// Accept number from user and Check whether 5th bit of that number is on or off.
// input :        	 25                      41
// output :              on                     off
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
		bool CheckBits()
		{
			unsigned int iMask = 0x00000010;
			unsigned int Result = 0;
			
			Result = iNo & iMask;
			
			if(Result == iMask)
			{
				return true;
			}
			else
			{
				return false;
			}
			
		}
		
};

int main()
{
	bool bRet = false;
	Binary obj;
	
	obj.Accept();
	bRet = obj.CheckBits();
	if (bRet == true)
	{
		cout<<"5th Bit is on \n";
	}
	else
	{
		cout<<"5th Bit is off \n";
	}
	
	return 0;
}