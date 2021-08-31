////////////////////////////////////////////////////////////////////////////////
// Accept number from user and return the count of on bits.
// input :        	10
// output :           2 bits
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
		unsigned int CountOnBits()
		{
			unsigned int iDigit = 0;
			int iCnt = 0;
			while(iNo > 0)
			{
				iDigit = iNo % 2;
				if(iDigit == 1)
				{
					iCnt += 1;
				}
				iNo = iNo / 2;
			}
			return iCnt;
		}
		
};

int main()
{
	int iret = 0;
	Binary obj;
	
	obj.Accept();
	iret = obj.CountOnBits();
	cout<<"Count of on bits is : "<<iret<<"\n";
	
	
	return 0;
}