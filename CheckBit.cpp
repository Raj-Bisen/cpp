////////////////////////////////////////////////////////////////////////////////
// Accept number and position from user and Check whether that bit  is on or off.
// input :        	 153          Pos :  5                 
// output :                on                 
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Binary
{
	public :
		unsigned int iNo;
		int iPos;
		
		Binary()
		{
			iNo = 0;
			iPos = 0;
		}
		~Binary()
		{
			cout<<"\nInside destructor\n";
		}
		void Accept()
		{
			cout<<"Enter the number\n";
			cin>>iNo;
			
			cout<<"Enter positin\n";
			cin>>iPos;
		}
		bool CheckBits()
		{
			unsigned int iMask = 0x00000001;
			unsigned int Result = 0;
			
			if((iPos < 1) || (iPos > 32))
				return false;
			
			iMask = iMask << (iPos -1);
			
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
		cout<<"Bit is on \n";
	}
	else
	{
		cout<<"Bit is off \n";
	}
	
	return 0;
}