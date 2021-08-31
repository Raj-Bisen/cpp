#include<iostream>
using namespace std;

class Digits
{
	private : 	
		int iNo ;
		int iDigits;
	public : 
		Digits()
		{
			cout<<"Inside constructor\n";
		}
		~Digits()
		{
			cout<<"Inside destructor\n";
		}
		void Accept()
		{
			cout<<"Enter the number\n";
			cin>>iNo;
		}
		int DiffDigit()
		{
			int iSum1 = 0 , iSum2 = 0;
			while(iNo > 0)
			{
				iDigits = iNo % 10;
				if(iDigits % 2 == 0)
				{
					iSum1 = iSum1 + iDigits;
				}
				else
				{
					iSum2 = iSum2 + iDigits;
				}
				iNo = iNo / 10;
			}
			return abs(iSum2 - iSum1);
		}
		
};

int main()
{
	int iRet = 0;
	Digits obj;
	
	obj.Accept();
	iRet =  obj.DiffDigit();
	cout<<"Difference is : "<<iRet<<"\n";
	
	return 0;
}